#include "stdafx.h"
#include "math.h"
#include <iostream>
#include "cassert"

int main()
{
	float a{};
	float b{};
	float c{};

	std::cout << "Enter the coefficients a, b, and c for a quadratic formula: " << std::endl;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	assert(a != 0);

	float discriminant = b * b - 4 * a * c;
	float denominator = 2 * a;
	float root1 = ((-b + sqrt(discriminant)) / (denominator));
	float root2 = ((-b - sqrt(discriminant)) / (denominator));

	assert(discriminant >= 0);

	std::cout << "The first root of the quadratic is x = " << root1 << std::endl;
	std::cout << "The second root of the quadratic is x = " << root2 << std::endl;

	return 0;
}