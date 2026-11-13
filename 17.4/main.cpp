#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {


   // 1. Matrices entieres 2x2
   
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;


    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "Matrice A :" << endl;
    cout << A;

    cout << "\nMatrice B :" << endl;
    cout << B;

    Matrix<int, 2, 2> C = A + B;

    cout << "\nAddition A + B :" << endl;
    cout << C;

    Matrix<int, 2, 2> D = A * B;

    cout << "\nMultiplication A * B :" << endl;
    cout << D;


  
    // 2. Matrices reelles 3x3
    

    Matrix<double, 3, 3> X;
    Matrix<double, 3, 3> Y;

    // Initialisation de X
    double valeur = 1.0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            X.at(i, j) = valeur;
            valeur++;
        }
    }

    // Initialisation de Y
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            Y.at(i, j) = 1.0;
        }
    }

    cout << "\nMatrice X :" << endl;
    cout << X;

    cout << "\nMatrice Y :" << endl;
    cout << Y;

    Matrix<double, 3, 3> Z = X + Y;

    cout << "\nAddition X + Y :" << endl;
    cout << Z;

    Matrix<double, 3, 3> W = X * Y;

    cout << "\nMultiplication X * Y :" << endl;
    cout << W;

    return 0;
}