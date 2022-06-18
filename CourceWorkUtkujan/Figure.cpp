#include "Figure.hpp"

Figure::~Figure() = default;

Figure::Figure(int x1, int y1, int x2, int y2) noexcept
	: x1(x1), y1(y1), x2(x2), y2(y2) {}

void Figure::Move(int x, int y)
{
	Hide();
	x1 += x;
	y1 += y;
	x2 += x;
	y2 += y;
	Show();
}