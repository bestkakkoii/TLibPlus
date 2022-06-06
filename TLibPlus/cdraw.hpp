#pragma once
#ifndef CDRAW
#define CDRAW

#include <fstream>
#include <vector>
#include <random>

#define WIN32_LEAN_AND_MEAN

#ifndef NOMINMAX
#define NOMINMAX
#endif
#define byte win_byte_override
#include <windows.h>

namespace cdraw
{
	__forceinline const int rand(const int& MIN, const int& MAX)
	{
		if (MIN > MAX)
			return 0;
		std::random_device rd;
		std::default_random_engine eng(rd());
		std::uniform_int_distribution<int> distr(MIN, MAX);
		return distr(eng);
	}

	struct image
	{
		image(int width, int height)
			: w(width), h(height), rgb(w* h * 3)
		{}
		uint8_t& r(int x, int y) { return rgb[(x + y * w) * 3 + 2]; }
		uint8_t& g(int x, int y) { return rgb[(x + y * w) * 3 + 1]; }
		uint8_t& b(int x, int y) { return rgb[(x + y * w) * 3 + 0]; }

		int w, h;
		std::vector<uint8_t> rgb;
	};

	template<class Stream>
	Stream& operator<<(Stream& out, image const& img)
	{
		uint32_t w = img.w, h = img.h;
		uint32_t pad = w * -3 & 3;
		uint32_t total = 54 + 3 * w * h + pad * h;
		uint32_t head[13] = { total, 0, 54, 40, w, h, (24 << 16) | 1 };
		char const* rgb = (char const*)img.rgb.data();

		out.write("BM", 2);
		out.write((char*)head, 52);
		for (uint32_t i = 0; i < h; i++)
		{
			out.write(rgb + (3 * w * i), 3 * w);
			out.write((char*)&pad, pad);
		}
		return out;
	}
}

#if 0
using namespace cdraw;

/* Example */

int main(int argc, char* argv[])
{
	constexpr int width = 500;
	constexpr int height = 500;
	image img(width, height);
	for (size_t i = 0; i < (size_t)height; ++i)
	{
		for (size_t j = 0; j < (size_t)width; ++j)
		{
			img.r(j, i) = rand(0, 255);
			img.g(j, i) = rand(0, 255);
			img.b(j, i) = rand(0, 255);
		}
	}
	std::ofstream("D:\\test.bmp") << img;
}
#endif
#endif