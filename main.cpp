#include <iostream>
using namespace std;

int sumArray(int arr[][3], int row, int col)
{
    if (row == 0 && col == 0)
        return arr[row][col]

    if (col < 0)
        return sumArray(arr, row - 1, 2)

    return arr[row][col] + sumArray(arr, row, col - 1);
}

int main()
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    }

    int total = sumArray(matrix, 1, 2);

    cout << "Sum of elements: " << total << endl

    return 0;
}
