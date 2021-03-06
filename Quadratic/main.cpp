#include "stdafx.h"
#include "math.h"
#include <iostream>
#include "cassert"

int main()
{
	double a{};
	double b{};
	double c{};

	std::cout << "For the roots of the quadratic equation a * x * x + b * x + c, enter the coefficients a, b, and c: " << std::endl;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	assert(a != 0);

	double discriminant = b * b - 4 * a * c;
	double denominator = 2 * a;

	assert(discriminant >= 0);

	double root1 = ((-b + sqrt(discriminant)) / (denominator));
	double root2 = ((-b - sqrt(discriminant)) / (denominator));

	std::cout << "The first root of the quadratic is x = " << root1 << std::endl;
	std::cout << "The second root of the quadratic is x = " << root2 << std::endl;

	return 0;
}