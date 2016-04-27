#include "Poly.h"

void main()
{
	Poly A({ 8, 0, -3, 2, -1 }, 'x');
	Poly B({ 2, 5, 6, 2 }, 'x');

	std::cout << A << std::endl;

	Poly C = A + B;

	std::cout << C << std::endl;

	C = A - B;

	std::cout << C << std::endl;

	int something;

	std::cin >> something;
}