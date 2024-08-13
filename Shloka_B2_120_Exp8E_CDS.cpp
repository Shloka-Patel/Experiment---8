// NAME - SHLOKA PATEL 
// PRN - 23070123120 
// EXPERIMENT - 8(E)  

// Multiplication of two matrices. 

#include<iostream> 
using namespace std; 

int main() 
{
      int r1, c1, r2, c2;
    
    // Input dimensions of the first matrix
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions of the second matrix
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Define the matrices
    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    // Input elements of the first and second matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    } 
    // Initialize the result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display the result
    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 

// Enter rows and columns for the first matrix: 2
// 3
// Enter rows and columns for the second matrix: 3
// 1
// Enter elements of the first matrix:
// Enter element at position (0, 0): 2
// Enter element at position (0, 1): 4
// Enter element at position (0, 2): 6
// Enter element at position (1, 0): 7
// Enter element at position (1, 1): 8
// Enter element at position (1, 2): 9
// Enter elements of the second matrix:
// Enter element at position (0, 0): 5
// Enter element at position (1, 0): 0
// Enter element at position (2, 0): 4
// Resultant matrix:
// 34
// 71