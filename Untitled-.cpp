#include <iostream>
using namespace std;
//2*2 matrice multiplication without taking input
int main() {

    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int result[2][2]; 


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;  
            for (int k = 0; k < 2; k++) { 
                result[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }


    cout << "Result is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
