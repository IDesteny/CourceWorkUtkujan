#pragma once
#include "Figure.hpp"

class Circle : public Figure
{
public:
	explicit Circle(int x1, int y1, int x2, int y2) noexcept;

	virtual void Show() const override;
	virtual void Hide() const override;
};