#pragma once

template <typename T, int n>
class Stack
{
	T fgs[n];
	int pos = 0;

public:
	void Add(T fg)
	{
		fgs[pos++] = fg;
	}

	auto Get()
	{
		auto t = fgs[--pos];
		fgs[pos] = nullptr;
		return t;
	}
	
	~Stack()
	{
		while (pos)
			fgs[--pos] = nullptr;
	}

	auto IsEmpty()
	{
		return !pos;
	}

	auto IsFull()
	{
		return pos == n;
	}
};