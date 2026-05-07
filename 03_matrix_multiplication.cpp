#include <iostream>
using namespace std;

void GetValue(int a[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
}

void ComputeAxA(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            r[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void PrintArray(int a[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Enter Matrix A:\n";
    GetValue(A);

    cout << "Enter Matrix B:\n";
    GetValue(B);

    ComputeAxA(A, B, C);

    cout << "Result:\n";
    PrintArray(C);

    return 0;
}
