//introduction to recursion

#include <iostream>

int factorial(int n)
{
    std::cout << n << '\n';
    if (n == 0)
    {
        return 1;
    }
    
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