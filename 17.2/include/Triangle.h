
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point A;
    Point B;
    Point C;

public:
    // Constructeur par defaut
    Triangle();

    // Constructeur parametre
    Triangle(Point A, Point B, Point C);

    // Calcul du perimetre
    double perimetre() const;
};

#endif
