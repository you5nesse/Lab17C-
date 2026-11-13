#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

template <typename T, size_t N, size_t M>
class Matrix {

private:
    array<array<T, M>, N> data{};

public:

    Matrix() {
    }

    T& at(size_t i, size_t j) {
        if (i >= N || j >= M) {
            throw out_of_range("Indice invalide");
        }

        return data[i][j];
    }

    
    const T& at(size_t i, size_t j) const {
        if (i >= N || j >= M) {
            throw out_of_range("Indice invalide");
        }

        return data[i][j];
    }

    
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {

        Matrix<T, N, M> result;

        for (size_t i = 0; i < N; i++) {
            for (size_t j = 0; j < M; j++) {

                result.at(i, j) = at(i, j) + other.at(i, j);
            }
        }

        return result;
    }

    template <size_t P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {

        Matrix<T, N, P> result;

        for (size_t i = 0; i < N; i++) {
            for (size_t j = 0; j < P; j++) {

                for (size_t k = 0; k < M; k++) {

                    result.at(i, j) += at(i, k) * other.at(k, j);
                }
            }
        }

        return result;
    }

};

template <typename T, size_t N, size_t M>
ostream& operator<<(ostream& os, const Matrix<T, N, M>& mat) {

    for (size_t i = 0; i < N; i++) {

        for (size_t j = 0; j < M; j++) {

            os << mat.at(i, j) << " ";
        }

        os << endl;
    }

    return os;
}

#endif