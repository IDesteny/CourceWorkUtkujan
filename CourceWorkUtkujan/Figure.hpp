#pragma once
#include <windows.h>

class Figure
{
protected:
	int x1, y1, x2, y2;
	HDC hdc = GetDC(GetConsoleWindow());

public:
	virtual ~Figure() = default;

	explicit Figure(int x1, int y1, int x2, int y2) noexcept;

	virtual void Show() const = 0;
	virtual void Hide() const = 0;
	virtual void Move(int x, int y);
};