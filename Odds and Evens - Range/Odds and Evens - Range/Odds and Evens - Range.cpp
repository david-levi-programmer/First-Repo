#include <iostream>
#include <string>

const int TOTAL = 10;

int main()
{

    int numbers[TOTAL] = { 78, 42, 7, 8, 15, 2, 83, 64, 23, 13 };
    for (int i : numbers)
    {
        if (i % 2 == 0)
        {
            std::cout << "The number " << i << " is even." << std::endl;
        }
        else
        {
            std::cout << "The number " << i << " is odd." << std::endl;
        }
    }
}