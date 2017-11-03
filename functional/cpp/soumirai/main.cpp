#include <iostream>
#include <iomanip>
#include <cmath>
#include "discount_factor.hpp"

int check = 1;


int main(int argc, char* argv[])
{
    double rate = 0.04;
	double maturity = 1.5;
	
	double df = discount_factor(rate, maturity);
    std::cout << "DF(" << maturity << "," << rate << ") = " << df << std::endl;
	
	std::vector<double> res = discount_factor(std::vector<double>(1, rate), std::vector<double>(1, maturity));
	std::cout << "DF(" << maturity << "," << rate << ") = " << res[0] << std::endl;
	std::cout << check << std::endl;
	
    return 0;
}
