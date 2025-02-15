#include <iostream>
#include <vector>

namespace jun
{

    class Point
    {
    private:
        double x, y;

    public:
        Point(double x = 0, double y = 0) : x(x), y(y) {}
        void printPoint()
        {
            std::cout << x << ", " << y << std::endl;
        }

        void setPoint(double x, double y)
        {
            this->x = x;
            this->y = y;
        }

        std::pair<double, double> getPoint()
        {   
            auto ret = std::make_pair(this->x, this->y);
            return ret;
        }
    };
}

int main()
{
    std::cout << "hello, world! " << std::endl;
    jun::Point point(1,2);
    point.printPoint();
    point.getPoint();
}