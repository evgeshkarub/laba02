#include <iostream>
#include <math.h>

int main()
    {
    // 1;
    int x = 0;
    int y = 0;
    std::cout << "enter x and y" << std::endl;
    std::cin >> x >> y;
    if ((x%2 != 0) && (y%2 != 0))
        {
        std::cout << " the condition is true " << std::endl;
        }
    else
        {
        std::cout << " the condition is false " << std::endl;
        }
    system ("pause");

    // 2;
    int a = 0;
    int b = 0;
    std::cout << "enter x and y" << std::endl;
    std::cin >> a >> b;
    if (((a>20) && (b<20)) || ((a<20) && (b>20)))
        {
        std::cout << " the condition is true " << std::endl;
        }
    else
        {
        std::cout << " the condition is false " << std::endl;
        }

    // 3;
    int c = 0;
    int d = 0;
    std::cout << "enter x and y" << std::endl;
    std::cin >> c >> d;
    if ((c = 0) || (d = 0))
        {
        std::cout << " the condition is true " << std::endl;
        }
    else
        {
        std::cout << " the condition is false " << std::endl;
        }

    // 4;
    int e = 0;
    int f = 0;
    int g = 0;
    std::cout << "enter x, y and z" << std::endl;
    std::cin >> e >> f >> g;
    if ((e < 0) && (f < 0) && (g < 0))
        {
        std::cout << " the condition is true " << std::endl;
        }
    else
        {
        std::cout << " the condition is false " << std::endl;
        }

    // 5;
    int h = 0;
    int i = 0;
    int j = 0;
    std::cout << "enter x, y and z" << std::endl;
    std::cin >> h >> i >> j;
    if ((h % 5 == 0) && (i % 5 != 0) && (j % 5 = 0)) {
    ;
} else if ((h%5 != 0) && (i%5 = 0) && (j%5 != 0)) {
    ;
} else if ((h%5 != 0) && (i%5 != 0) && (j%5 = 0)) {
    ;
}
{
std::cout << " the condition is true " << std::endl;
}
else
{
std::cout << " the condition is false " << std::endl;
}

    // 6;
    int k = 0;
    int l = 0;
    int m = 0;
    std::cout << "enter x, y and z" << std::endl;
    std::cin >> k >> l >> m;
    if ((k > 100) || (l > 100) || (m > 100))
        {
        std::cout << " the condition is true " << std::endl;
        }
    else
        {
        std::cout << " the condition is false " << std::endl;
        }

    // 2.1;
    int o = 0;
    int p = 0;
    std::cout << "enter first figure's placing" << std::endl;
    std::cin >> o >> p;
    pair<int, int> firstFigure;
    firstFigure.first = o;
    firstFigure.second = p;

    int r = 0;
    int s = 0;
    std::cout << "enter second figure's placing" << std::endl;
    std::cin >> r >> s;
    pair<int, int> secondFigure;
    firstFigure.first = r;
    firstFigure.second = s;
    if ((firstFigure.first == secondFigure.first) || (firstFigure.second == secondFigure.second)) {
        std::cout << "the rook threatens the playing field(c, d)" << std::endl; 
        }
    if ((abs(firstFigure.first - secondFigure.second) == (abs(firstFigure.second - secondFigure.second) == 1)) {
        std::cout << "the bishop threatens the playing field(c, d)" << std::endl; 
        }
    if ((abs(firstFigure.first - secondFigure.second) == 1) || (abs(firstFigure.second - secondFigure.second) || (firstFigure.first== {
    std::cout << "the king can get to the playing field(c, d)" << std::endl; 
}
if ((abs(firstFigure.first - secondFigure.second) == abs(firstFigure.second - secondFigure.second) == 1)) {
    std::cout << "the king can get to the playing field(c, d)" << std::endl; 
}

}
