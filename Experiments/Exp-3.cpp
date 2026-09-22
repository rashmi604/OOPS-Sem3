#include <iostream>
using namespace std;

// Inline function
inline int square(int n)
{
    return n * n;
}

// Function with default argument
int add(int a, int b = 10)
{
    return a + b;
}

// Function overloading
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Square of 5 = " << square(5) << endl;

    cout << "Addition = " << add(20) << endl;
    cout << "Addition = " << add(20, 30) << endl;

    cout << "Integer multiplication = " << multiply(4, 5) << endl;
    cout << "Double multiplication = " << multiply(2.5, 4.0) << endl;

    return 0;
}