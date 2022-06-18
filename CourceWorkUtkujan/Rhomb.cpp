#include "Rhomb.hpp"

void Rhomb::_DrawRhomb(auto rgb) const
{
	SelectObject(hdc, CreatePen(0, 1, rgb));
	MoveToEx(hdc, x1 + (x2 - x1) / 2, y1, NULL);
	LineTo(hdc, x2, y1 + (y2 - y1) / 2);
	LineTo(hdc, x1 + (x2 - x1) / 2, y2);
	LineTo(hdc, x1, y1 + (y2 - y1) / 2);
	LineTo(hdc, x1 + (x2 - x1) / 2, y1);
}

Rhomb::Rhomb(int x1, int y1, int x2, int y2) noexcept
	: Figure(x1, y1, x2, y2) {}

void Rhomb::Show() const
{
	_DrawRhomb(RGB(0, 0, 0));
}

void Rhomb::Hide() const
{
	_DrawRhomb(RGB(242, 242, 242));
}