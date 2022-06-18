#pragma once
#include "Figure.hpp"

class Rhomb : public Figure
{
	void _DrawRhomb(auto rgb) const;

public:
	explicit Rhomb(int x1, int y1, int x2, int y2) noexcept;

	virtual void Show() const override;
	virtual void Hide() const override;
};