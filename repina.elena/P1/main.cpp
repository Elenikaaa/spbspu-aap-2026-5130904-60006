#include <iostream>
bool ChekInput()
    {
    if (std::cin.fail()) {
        std::cerr << "Input error";
        return false;
    }
    return true;
    }
int main()
    {
    int prev = 0, curr = 0, next = 0;
    int count = 0;
    int count_1 = 0;
    std::cin >> prev;
    if (!ChekInput())
    {
        std::cerr << "Input error";
        return 1;
    }
    if (prev == 0)
    {
        std::cout << "0";
        return 0;
    }

    std::cin >> curr;
    if (!ChekInput())
    {
        std::cerr << "Input error";
        return 1;
    }
    if (curr == 0)
    {
        std::cout << "0";
        return 0;
    }

    while (std::cin >> next && next != 0)
    {
        if (prev > curr && curr > next)
        {
            count++;
        }
        if (next == prev+ curr)
        {
            count_1++;
        }
        prev = curr;
        curr = next;
    }
    if (!std::cin && !std::cin.eof())
    {
        std::cerr << "Error: Invalid character in input" << std::endl;
        return 1;
    }
    std::cout << count << "\n";
    std::cout << count_1;
    }
