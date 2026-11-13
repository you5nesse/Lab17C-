#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {
    Point3D p1(2.5, 3.5, 4.5);
    Point3D p2(10, 20, 30);

    cout << "Premier point :" << endl;
    cout << "X = " << p1.getX() << endl;
    cout << "Y = " << p1.getY() << endl;
    cout << "Z = " << p1.getZ() << endl;

    cout << "\nDeuxieme point :" << endl;
    cout << "X = " << p2.getX() << endl;
    cout << "Y = " << p2.getY() << endl;
    cout << "Z = " << p2.getZ() << endl;

    cout << "\nAppuyez sur Entree pour quitter...";
    cin.get();

    return 0;
}
