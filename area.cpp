
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float rad)
    {
        radius = rad;
    }

    float area() const override
    {
        return 3.14f * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float len, float wid)
    {
        length = len;
        breadth = wid;
    }

    float area() const override
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    float area() const override
    {
        return 0.5f * base * height;
    }
};

int main()
{
    Circle c(4);
    Rectangle r(7, 9);
    Triangle t(14, 5);

    // Using pointers
    Shape *ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;

    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;

    // Using references
    Shape &ref = c;
    cout << "Circle Area using Reference: " << ref.area() << endl;

    Shape &ref2 = r;
    cout << "Rectangle Area using Reference: " << ref2.area() << endl;

    Shape &ref3 = t;
    cout << "Triangle Area using Reference: " << ref3.area() << endl;

    return 0;
}

