
#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x;
    double y;
    double z;

public:
    // Constructeur
    Point3D(double x, double y, double z);

    // Accesseurs (Getters)
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
