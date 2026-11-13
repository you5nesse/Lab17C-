
#include "Point3D.h"

// Constructeur
Point3D::Point3D(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Getter X
double Point3D::getX() const {
    return x;
}

// Getter Y
double Point3D::getY() const {
    return y;
}

// Getter Z
double Point3D::getZ() const {
    return z;
}
