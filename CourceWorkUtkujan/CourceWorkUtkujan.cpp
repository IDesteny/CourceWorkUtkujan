#include "Circle.hpp"
#include "Rhomb.hpp"
#include "Stack.hpp"

int main()
{
	system("color F0");

	Stack<Figure*, 2> st;
	st.Add(new Rhomb(100, 100, 200, 200));
	st.Add(new Circle(100, 100, 200, 200));

	st.Get()->Show();
	st.Get()->Show();
}