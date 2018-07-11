#include <cmath>


class IShape {
public:
    virtual double Area() const = 0;
    virtual ~IShape() {}
};

class Square : public IShape {
public:
    Square(double w) : width(w) {}

    double Area() const override {
        return width * width;
    }
private:
    double width;
};

class Rectangle : public IShape {
public:
    Rectangle(double w, double h) : width(w), height(h){}

    double Area() const override {
        return width * height;
    }
private:
    double width;
    double height;
};

class Triangle : public IShape {
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double Area() const override {
        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
private:
    double side1;
    double side2;
    double side3;
};

class Circle : public IShape {
public:
    Circle(double r) : radius(r) {}

    double Area() const override {
        return M_PI * radius * radius;
    }

private:
    double radius;
};
