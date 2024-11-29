// Write a program for matrix multiplication.

#include <iostream>
using namespace std;

int main()
{
    int A[2][2] = {
        {1, 2},
        {3, 4}};

    int B[2][2] = {
        {5, 6},
        {7, 8}};

    int result[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
        }
    }
    cout << "Product of matrix A and B:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
