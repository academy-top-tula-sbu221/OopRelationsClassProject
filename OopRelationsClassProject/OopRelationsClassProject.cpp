#include <iostream>

class Point2D
{
    int x;
    int y;
public:
    Point2D(int x, int y) : x{ x }, y{ y } 
    {
        std::cout << this << " Point create\n";
    }
    Point2D() : Point2D(0, 0) {};
    ~Point2D()
    {
        std::cout << "Point destroy\n";
    }
};

class Circle
{
    int radius;
    Point2D center;
public:
    Circle(int x, int y, int radius)
        : center{ Point2D(x, y) }, radius{ radius }
    {
        std::cout << this << " Circle create\n";
    }
    Circle() : Circle(0, 0, 0) {}
    ~Circle()
    {
        std::cout << "Circle destroy\n";
    }
};

class Teacher
{
    std::string name;
public:
    Teacher(std::string name) : name{ name } 
    {
        std::cout << "Teacher create\n";
    }
    Teacher() : Teacher("Anonim") {}
    ~Teacher()
    {
        std::cout << "Teacher destroy\n";
    }
    friend std::ostream& operator<<(std::ostream& out, const Teacher& t)
    {
        out << t.name;
        return out;
    }

};

class Department
{
    Teacher* boss;
public:
    Department(Teacher* teacher = nullptr) : boss{ teacher } 
    {
        std::cout << "Department create\n";
    };
    ~Department()
    {
        std::cout << "Department destroy\n";
    };
};

int main()
{
    Circle c1;
    /*Teacher* t = new Teacher();

    Department d(t);

    delete t;*/
}
