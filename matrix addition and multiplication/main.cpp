/*define class metrix which uses a 2d array and two counters rlimit and climit to hold the row size and 
column size of the matrix define member function which perform matrix multiplication and matrix addition*/
#include <iostream>
using namespace std;
class Matrix {
private:
    int **matrix;
    int rLimit; // Row limit
    int cLimit; // Column limit
public:
    Matrix(int r = 0, int c = 0) : rLimit(r), cLimit(c) {  // Constructor
        // Allocate memory for the matrix
        matrix = new int*[rLimit];
        for (int i = 0; i < rLimit; ++i)
            matrix[i] = new int[cLimit];
    }
    ~Matrix() {     // Destructor
        // Deallocate memory for the matrix
        for (int i = 0; i < rLimit; ++i)
            delete[] matrix[i];
            delete[] matrix;
    }
    void setElement(int row, int col, int value) {  // Method to initialize matrix element at specific position
        if (row >= 0 && row < rLimit && col >= 0 && col < cLimit)  matrix[row][col] = value;
        else cout << "Invalid position for setting element." <<endl;
    }
    int getElement(int row, int col) const {  // Method to get matrix element at specific position
        if (row >= 0 && row < rLimit && col >= 0 && col < cLimit) return matrix[row][col];
        else cout << "Invalid position for getting element." <<endl;
            return -1; // Return some default value to indicate error
    }
    Matrix add(const Matrix& other) const { // Method to perform matrix addition
        Matrix result(rLimit, cLimit);
        for (int i = 0; i < rLimit; ++i) {
            for (int j = 0; j < cLimit; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
    Matrix multiply(const Matrix& other) const {   // Method to perform matrix multiplication
        Matrix result(rLimit, other.cLimit);
        for (int i = 0; i < rLimit; ++i) {
            for (int j = 0; j < other.cLimit; ++j) {
                for (int k = 0; k < cLimit; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
    void display() const {   // Method to display the matrix
        for (int i = 0; i < rLimit; ++i) {
            for (int j = 0; j < cLimit; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout <<endl;
        }
    }
};

int main() {
    Matrix mat1(2, 2);
    Matrix mat2(2, 2);
    // Initialize matrices For demonstration, let's initialize them with some values
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            mat1.setElement(i, j, i * 3 + j + 1);
            mat2.setElement(j, i, i * 3 + j + 1);
        }
    }
    cout << "Matrix 1:" <<endl;
    mat1.display();
    cout <<endl;
    cout << "Matrix 2:" <<endl;
    mat2.display();
    cout <<endl;
    Matrix sum = mat1.add(mat2);
    cout << "Matrix Sum:" <<endl;
    sum.display();
    cout <<endl;
    Matrix product = mat1.multiply(mat2);
    cout << "Matrix Product:" <<endl;
    product.display();
    cout <<endl;
    return 0;
}


