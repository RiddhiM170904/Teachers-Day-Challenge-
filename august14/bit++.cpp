#include <iostream>
#include <string>

int main()
{
    int n, x = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::string statement;
        std::cin >> statement;
        if (statement[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    std::cout << x << std::endl;
    return 0;
}