
#include "Triangle.h"
#include "Segment.h"

// Constructeur par defaut
Triangle::Triangle() {
    A = Point();
    B = Point();
    C = Point();
}

Triangle::Triangle(Point A, Point B, Point C) {
    this->A = A;
    this->B = B;
    this->C = C;
}

double Triangle::perimetre() const {
    Segment AB(A, B);
    Segment BC(B, C);
    Segment CA(C, A);

    return AB.longueur() +
           BC.longueur() +
           CA.longueur();
}
