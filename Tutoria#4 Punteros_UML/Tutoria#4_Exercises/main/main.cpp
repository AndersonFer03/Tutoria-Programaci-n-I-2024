
#include <iostream>
using namespace std;
//Vector diagonal
void print(int** Matrix, int& row, int& column) {

    cout << "Matrix con el vector diagonal: " << endl;
    for (int i = 0; i < row;i++) {
        for (int j = 0; j < column; j++) {
            cout << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
void loadRowLeft(int** Matrix, int i) {
    for (int a = i-1;a >= 0;a--) {
         Matrix[i][a] = Matrix[i][a + 1] - 1;
    }
}
int** diagonalVector(int* Vector, int& row, int& column) {
    int** newMatrix;
    newMatrix = new int* [row];
    for (int i = 0;i < row;i++) {
        newMatrix[i] = new int[column];
        newMatrix[i][i] = Vector[i];
        for (int j = i + 1;j < column;j++) {
            newMatrix[i][j] = newMatrix[i][j - 1] * 2;
        }
        loadRowLeft(newMatrix, i);
    }
    return newMatrix;
}
//Calcular Pitagoras
void printPit(double** M, int& row, int& column) {

    cout << "Matrix Pythagoras: " << endl;
    for (int i = 0; i < row;i++) {
        for (int j = 0; j < column; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}
double** pythagoras(double** Matrix, int& row, int& column) {
    double** newMatrix;
    double hypotenuse = 0;
    newMatrix = new double* [row];
    for (int i = 0;i < row;i++) {
        newMatrix[i] = new double[column + 1];
        for (int j = 0;j < column;j++) {
            newMatrix[i][j] = Matrix[i][j];
        }
        hypotenuse = sqrt(pow(Matrix[i][0], 2) + pow(Matrix[i][1], 2));
        newMatrix[i][column] = hypotenuse;

    }
    return newMatrix;
}
int main()
{
    cout << "--- Vector Diagonal: --- \n\n";
    int* vector;
    int row = 5, column = 5;
    vector = new int[column];
    vector[0] = 2;
    vector[1] = 9;
    vector[2] = 3;
    vector[3] = 7;
    vector[4] = 5;
    int** Matrix;
    Matrix = diagonalVector(vector, row, column);
    print(Matrix, row, column);
    cout << endl;

    cout << "--- Calcular Pitagoras: --- \n\n";
    double** MatrixPit;
    int rowp = 3, columnp = 2;
    MatrixPit = new double* [rowp];
    for (int i = 0; i < rowp;i++) {
        MatrixPit[i] = new double[columnp];
    }
    MatrixPit[0][0] = 3;
    MatrixPit[0][1] = 4;
    MatrixPit[1][0] = 5;
    MatrixPit[1][1] = 8;
    MatrixPit[2][0] = 6;
    MatrixPit[2][1] = 8;
    printPit(MatrixPit, rowp, columnp);
    MatrixPit = pythagoras(MatrixPit, rowp, columnp);
    columnp += 1;
    cout << "Calculo " << endl;
    printPit(MatrixPit, rowp, columnp);
}

