#include <iostream>

using namespace std;

class Matrix {
    private:
        int elements[3];

    public:
        Matrix() {}
        Matrix(int a, int b, int c) {
            elements[0] = a;
            elements[1] = b;
            elements[2] = c;
        }

        // Overloading + operator to add two matrices
        Matrix operator+(Matrix const &obj) {
            Matrix result;
            for (int i = 0; i < 3; i++) {
                result.elements[i] = elements[i] + obj.elements[i];
            }
            return result;
        }

        void print() {
            for (int i = 0; i < 3; i++) {
                cout << elements[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Matrix A(1, 2, 3);
    Matrix B(4, 5, 6);

    Matrix C = A + B;

    cout << "Matrix A: ";
    A.print();
    cout << "Matrix B: ";
    B.print();
    cout << "Matrix C: ";
    C.print();

     return 0;
}