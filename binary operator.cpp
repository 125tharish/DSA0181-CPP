#include <iostream>
using namespace std;
class Matrix {
    int mat[2][2];
public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }
    Matrix operator*(const Matrix &m) {
        Matrix result;
        result.mat[0][0] = mat[0][0] * m.mat[0][0] + mat[0][1] * m.mat[1][0];
        result.mat[0][1] = mat[0][0] * m.mat[0][1] + mat[0][1] * m.mat[1][1];
        result.mat[1][0] = mat[1][0] * m.mat[0][0] + mat[1][1] * m.mat[1][0];
        result.mat[1][1] = mat[1][0] * m.mat[0][1] + mat[1][1] * m.mat[1][1];
        return result;
    }
    void display() {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};
int main() {
    Matrix m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matrix result = m1 * m2;
    result.display();
    return 0;
}