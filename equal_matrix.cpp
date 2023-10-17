#include <iostream>

using namespace std;

int main() {
    int m, n, p, q, flag = 0, i, j;
    int A[10][10] = {0}, B[10][10] = {0};

    cout << "Enter the number of row and column of first matrix=";
    cin >> m;
    cin >> n;

    cout << "Enter the first matrix of order " << m << " x " << n << " = \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter the number of row and column of second matrix=";
    cin >> p;
    cin >> q;

    cout << "Enter the first matrix of order " << p << " x " << q << " = \n";
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    if (m != p || n != q) {
        cout << "\nMatrices are of different order,hence not equal";
        flag = 1;
    } else {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (A[i][j] != B[i][j]) { 
                    cout << "\nMatrices are not equal. Element mismatch at " << i + 1 << " row " << j + 1 << " column";
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }
    if (flag == 0)
        cout << "\nMatrices are equal";
    return 0;
}
