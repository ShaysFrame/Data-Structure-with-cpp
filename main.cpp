//introduction to recursion

#include <iostream>

int factorial(int n)
{
    int smallOutput = factorial (n-1);
    return n * smallOutput;
}

int main()
{
    int n{};
    std::cin >> n;

    int output = factorial(n);
    std::cout << output << std::endl;
}