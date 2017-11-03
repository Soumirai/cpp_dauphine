#ifndef DISCOUNT_FACTOR_HPP
#define DISCOUNT_FACTOR_HPP
#include <vector>

double discount_factor(double rate, double maturity);
std::vector<double> discount_factor(const std::vector<double>& rate, const std::vector<double>& maturity);
#endif