#pragma execution_character_set("utf-8")
#ifndef __ASTAR_H__
#define __ASTAR_H__

#include <vector>
#include <memory>
#include <cstdint>
#include <functional>
#include <math.h>

enum class Heuristic
{
	manhattan,
	euclidean,
	octagonal
};

class BlockAllocator;

class AStar
{
public:
	/**
	 * 二維向量
	 */
	struct Vec2
	{
		uint16_t x;
		uint16_t y;

		Vec2() : x(0), y(0)
		{
		}

		Vec2(uint16_t x1, uint16_t y1) : x(x1), y(y1)
		{
		}

		void reset(uint16_t x1, uint16_t y1)
		{
			x = x1;
			y = y1;
		}

		int __fastcall distance(const Heuristic& h, const Vec2& other) const
		{
			switch (h)
			{
			case Heuristic::manhattan:
				return abs(other.x - x) + abs(other.y - y);
			case Heuristic::euclidean:
				return (int)(sqrt((pow(((other.x) - (x)), (2)) + pow(((other.y) - (y)), (2)))));
			case  Heuristic::octagonal:
				return (int)std::hypot(other.x - x, other.y - y);
			}
			return 0;
		}

		bool operator== (const Vec2& other) const
		{
			return x == other.x && y == other.y;
		}
	};

	typedef std::function<bool(const Vec2&)> Callback;

	/**
	 * 搜索參數
	 */
	struct Params
	{
		bool        corner;     // 允許拐角
		uint16_t    height;     // 地圖高度
		uint16_t    width;      // 地圖寬度
		Vec2        start;      // 起點坐標
		Vec2        end;        // 終點坐標
		Callback    can_pass;   // 是否可通過

		Params() : height(0), width(0), corner(true)
		{
		}
	};

private:
	/**
	 * 路徑節點狀態
	 */
	enum class NodeState
	{
		NOTEXIST,               // 不存在
		IN_OPENLIST,            // 在開啟列表
		IN_CLOSEDLIST           // 在關閉列表
	};

	/**
	 * 路徑節點
	 */
	struct Node
	{
		uint16_t    g;          // 與起點距離
		uint16_t    h;          // 與終點距離
		Vec2        pos;        // 節點位置
		NodeState   state;      // 節點狀態
		Node* parent;     // 父節點

		/**
		 * 計算f值
		 */
		int f() const
		{
			return g + h;
		}

		inline Node(const Vec2& pos)
			: g(0), h(0), pos(pos), parent(nullptr), state(NodeState::NOTEXIST)
		{
		}
	};

public:
	AStar(BlockAllocator* allocator);

	~AStar();

public:
	/**
	 * 獲取直行估值
	 */
	int get_step_value() const;

	/**
	 * 獲取拐角估值
	 */
	int get_oblique_value() const;

	/**
	 * 設置直行估值
	 */
	void set_step_value(int value);

	/**
	 * 獲取拐角估值
	 */
	void set_oblique_value(int value);

	/**
	*  設置搜索參數
	*/
	void set_heuristic_type(const Heuristic& type);

	/**
	 * 執行尋路操作
	 */
	std::vector<Vec2> __fastcall find(const Params& param);

private:
	/**
	 * 清理參數
	 */
	void clear();

	/**
	 * 初始化參數
	 */
	void __fastcall init(const Params& param);

	/**
	 * 參數是否有效
	 */
	bool __fastcall is_vlid_params(const Params& param);

private:
	/**
	 * 二叉堆上濾
	 */
	void __fastcall percolate_up(size_t hole);

	/**
	 * 獲取節點索引
	 */
	bool __fastcall get_node_index(Node* node, size_t* index);

	/**
	 * 計算G值
	 */
	uint16_t __fastcall calcul_g_value(Node* parent, const Vec2& current);

	/**
	 * 計算F值
	 */
	uint16_t __fastcall calcul_h_value(const Vec2& current, const Vec2& end);

	/**
	 * 節點是否存在於開啟列表
	 */
	bool __fastcall in_open_list(const Vec2& pos, Node*& out_node);

	/**
	 * 節點是否存在於關閉列表
	 */
	bool __fastcall in_closed_list(const Vec2& pos);

	/**
	 * 是否可通過
	 */
	bool __fastcall can_pass(const Vec2& pos);

	/**
	 * 當前點是否可到達目標點
	 */
	bool __fastcall can_pass(const Vec2& current, const Vec2& destination, bool allow_corner);

	/**
	 * 查找附近可通過的節點
	 */
	void __fastcall find_can_pass_nodes(const Vec2& current, bool allow_corner, std::vector<Vec2>* out_lists);

	/**
	 * 處理找到節點的情況
	 */
	void __fastcall handle_found_node(Node* current, Node* destination);

	/**
	 * 處理未找到節點的情況
	 */
	void __fastcall handle_not_found_node(Node* current, Node* destination, const Vec2& end);

private:
	int                     step_val_;
	int                     oblique_val_;
	std::vector<Node*>      mapping_;
	uint16_t                height_;
	uint16_t                width_;
	Callback                can_pass_;
	std::vector<Node*>      open_list_;
	BlockAllocator* allocator_;
	Heuristic   heuristictype_;      // 啟發式類型  		Heuristic   htype;      // 啟發式類型
};

#endif
