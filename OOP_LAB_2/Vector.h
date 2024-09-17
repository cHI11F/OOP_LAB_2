#ifndef VECTOR_H
#define VECTOR_H

#include <string>
#include <cmath>
#include <iostream>

class Vector {
private:
    double x, y, z;

public:
    
    Vector();
    Vector(double x, double y, double z);

    
    double getX() const;
    double getY() const;
    double getZ() const;

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    
    void Init(double x, double y, double z);

    
    void Read();

    
    void Display() const;

    
    std::string toString() const;

    
    Vector add(const Vector& v) const;

    
    double dotProduct(const Vector& v) const;

    
    double length() const;
};

#endif 
