#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "enter three numbers" << std::endl;
    int numberK = 0;
    int numberL = 0;
    int numberM = 0;
    std::cin >> numberK >> numberL >> numberM;
    if ((numberK % 2 == 1) && (numberL % 2 == 1))
    {
        std::cout << " the condition is true " << std::endl;
    }
    else
    {
        std::cout << " the condition is false " << std::endl;
    }
    if (((numberK < 20) && (numberL >= 20)) ||
        ((numberK >= 20) && (numberL < 20)))
    {
        std::cout << "the condition is true" << std::endl;
    }
    else
    {
        std::cout << "the condition is false" << std::endl;
    }
    if (numberK == 0 || numberL == 0)
    {
        std::cout << "the condition is true" << std::endl;
    }
    else
    {
        std::cout << "the condition is false" << std::endl;
    }
    if (numberK < 0 && numberL < 0 && numberM < 0)
    {
        std::cout << "the condition is true" << std::endl;
    }
    else
    {
        std::cout << "the condition is false" << std::endl;
    }
    if ((numberK %  5 == 0 && numberL % 5 != 0 && numberM != 0) ||
        (numberK %  5 != 0 && numberL % 5 == 0 && numberM != 0) ||
        (numberK %  5 != 0 && numberL % 5 != 0 && numberM == 0))
    {
        std::cout << "the condition is true" << std::endl;
    }
    else
    {
        std::cout << "the condition is false" << std::endl;
    }
    if (numberK > 100 || numberL > 100  ||  numberM > 100)
    {
        std::cout << "the condition is true" << std::endl;
    }
    else
    {
        std::cout << "the condition is false" << std::endl;
    }
    std::cout << "Enter a < 9 and b < 9" << std::endl;
    std::pair<int, int> b;
    std::cin >> b.first >> b.second;
    std::cout << "Enter new pair c < 8 and d < 8" << std::endl;
    std::pair<int, int> c;
    std::cin >> c.first >> c.second;
    if (b.first == c.first || b.second == c.second)
    {
        std::cout << "rook threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "rook  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (std::abs(b.first - c.first) == std::abs(b.second - c.second))
    {
        std::cout << "elephant threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "elephant  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (std::abs(b.first - c.first) ==  1 || std::abs(b.second - c.second) == 1)
    {
        std::cout << "king threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "king  doesn`t threatens the field (c,d)" << std::endl;
    }
    if ((b.first == c.first) || (b.second == c.second) ||
        (std::abs(b.first - c.first) == std::abs(b.second - c.second)))
    {
        std::cout << "queen threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "queen  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (((b.first + 1 == c.first) && (b.second - 1 == c.second)) ||
        ((b.first - 1 == c.first) && (b.second + 1 == c.second)))
    {
        std::cout << "pawn eat the field (c,d)" << std::endl;
    }
    else if ((b.first == 2) && ((b.first == c.first) && (b.second + 2 == c.second)) ||
             (b.first == c.first) && (b.second + 1 ==c.second))
    {
        std::cout << "paw can go to the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "paw can go to the field (c,d)" << std::endl;
    }
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i << "*7 = " << 7*i << std::endl;
    }
    unsigned int count = 1;
    for (int j = 8; j <= 15; ++j)
    {
    count = count * j;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "enter a (1<a<20)" << std::endl;
    int a = 0;
    std::cin >> a;
    for (int k = a; k <= 20; ++k)
    {
        count = count * k;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "enter b (1<b<20)" << std::endl;
    int numberB = 0;
    std::cin >> numberB;
    for (int t = 1; t <= numberB; ++t)
    {
         count = count * t;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "enter a " << std::endl;
    int firstborderA = 0;
    std::cin >> firstborderA;
    std::cout << "enter b (b>=a)" << std::endl;
    int secondborderB = 0;
    std::cin >> secondborderB;
    for (int q = firstborderA; q <= secondborderB; ++q)
    {
        count = count * q;
    }
    std::cout << count << std::endl;
    return 0;


}
