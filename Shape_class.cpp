#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double area() const override {
        return 4 * M_PI * radius * radius;
    }

    double volume() const override {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }

    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 7.0);

    std::cout << "Sphere:\n";
    std::cout << "Area: " << sphere.area() << std::endl;
    std::cout << "Volume: " << sphere.volume() << std::endl;

    std::cout << "\nCylinder:\n";
    std::cout << "Area: " << cylinder.area() << std::endl;
    std::cout << "Volume: " << cylinder.volume() << std::endl;

    return 0;
}

