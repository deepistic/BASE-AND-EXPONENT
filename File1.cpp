#include <iostream>
using namespace std; 

double Power(double base, int exponent) 
{
    double result = 1.0;


    if (exponent < 0) 
    {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }

    return result;
}

int main() 
{
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = Power(base, exponent);

    cout << "Result: " << result << std::endl;

    return 0;
}
