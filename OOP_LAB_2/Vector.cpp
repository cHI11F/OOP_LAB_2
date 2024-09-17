#include "Vector.h"


Vector::Vector() : x(0), y(0), z(0) {}
Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}


double Vector::getX() const { return x; }
double Vector::getY() const { return y; }
double Vector::getZ() const { return z; }

void Vector::setX(double x) { this->x = x; }
void Vector::setY(double y) { this->y = y; }
void Vector::setZ(double z) { this->z = z; }


void Vector::Init(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}


void Vector::Read() {
    std::cout << "Введіть x: "; std::cin >> x;
    std::cout << "Введіть y: "; std::cin >> y;
    std::cout << "Введіть z: "; std::cin >> z;
}


void Vector::Display() const {
    std::cout << "Вектор: (" << x << ", " << y << ", " << z << ")" << std::endl;
}


std::string Vector::toString() const {
    return "Vector(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}


Vector Vector::add(const Vector& v) const {
    return Vector(x + v.x, y + v.y, z + v.z);
}


double Vector::dotProduct(const Vector& v) const {
    return x * v.x + y * v.y + z * v.z;
}


double Vector::length() const {
    return std::sqrt(x * x + y * y + z * z);
}
