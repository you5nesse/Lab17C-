
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    // Constructeur par defaut
    Point();

    // Constructeur parametre
    Point(double x, double y);

    // Accesseurs
    double getX() const;
    double getY() const;
};

#endif
