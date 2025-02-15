#include <iostream>
#include <vector>

namespace jun
{

    class Point
    {
    private:
        double x, y;

    public:
        Point() : x(0), y(0) {}
        void printPoint()
        {
            std::cout << x << ", " << y << std::endl;
        }
    };
}

int main()
{
    std::cout << "hello, world! " << std::endl;
}