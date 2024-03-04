#include <iostream>
using namespace std;


void Power(double base, int exponent, double &result) 
{
    result = 1.0;

    // Handle negative exponents
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }
}

int main() 
{
    double base;
    int exponent;
    double result;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    Power(base, exponent, result);

    // Result
    cout << "Result: " << result << std::endl;

    return 0;
}
