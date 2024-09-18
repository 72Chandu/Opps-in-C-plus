#include<iostream>
using namespace std;

class matrix {
    int **p; // pointer to matrix
    int d1, d2; // dimension
public:
    matrix(int x, int y);
    void getelement(int i, int j, int val) {
        p[i][j] = val;
    }
    int &putelement(int i, int j) {
        return p[i][j];
    }
};

matrix::matrix(int x, int y) {
    d1 = x;
    d2 = y;
    p = new int *[d1]; // creates an array pointer
    for (int i = 0; i < d1; i++) {
        p[i] = new int[d2]; // creates space for each row
    }
}

int main() {
    int m, n;
    cout << "Enter size of matrix: ";
    cin >> n >> m;
    matrix A(m, n);
    int value;
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> value;
            A.getelement(i, j, value);
        }
    }
    cout << "Element at position (1, 2): " << A.putelement(1, 2) << endl;
    return 0;
}
