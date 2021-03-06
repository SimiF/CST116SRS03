#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	int i0{};
	int i1{};

	double d0{};
	double d1{};

	std::cin >> i0 >> i1 >> d0 >> d1;

	int i0_plus_i1 = i0 + i1;
	double i0_plus_d0 = i0 + d0;
	double d0_plus_d1 = d0 + d1;

	int i0_minus_i1 = i0 - i1;
	double i0_minus_d0 = i0 - d0;
	double d0_minus_d1 = d0 - d1;

	int i0_times_i1 = i0 * i1;
	double i0_times_d0 = i0 * d0;
	double d0_times_d1 = d0 * d1;

	int i0_dividing_i1 = i0 / i1;
	double i0_dividing_d0 = i0 / d0;
	double d0_dividing_d1 = d0 / d1;

	int i0_modulus_i1 = i0 % i1;
	int i1_modulus_i0 = i1 % i0;

	std::cout << "i0 * i1 == " << std::left << i0_times_i1 << '\n';
	std::cout << "i0 * d0 == " << std::left << i0_times_d0 << '\n';
	std::cout << "d0 * d1 == " << std::left << d0_times_d1 << '\n' << std::endl;

	std::cout << "i0 / i1 == " << std::left << i0_dividing_i1 << '\n';
	std::cout << "i0 / d0 == " << std::left << i0_dividing_d0 << '\n';
	std::cout << "d0 / d1 == " << std::left << d0_dividing_d1 << '\n' << std::endl;

	std::cout << "i0 % i1 == " << std::left << i0_modulus_i1 << '\n';
	std::cout << "i1 % i0 == " << std::left << i1_modulus_i0 << '\n' << std::endl;

	std::cout << "i0 + i1 == " << std::left << i0_plus_i1 << '\n';
	std::cout << "i0 + d0 == " << std::left << i0_plus_d0 << '\n';
	std::cout << "d0 + d1 == " << std::left << d0_plus_d1 << '\n' << std::endl;

	std::cout << "i0 - i1 == " << std::left << i0_minus_i1 << '\n';
	std::cout << "i0 - d0 == " << std::left << i0_minus_d0 << '\n';
	std::cout << "d0 - d1 == " << std::left << d0_minus_d1 << std::endl;
 
    return 0;
}

