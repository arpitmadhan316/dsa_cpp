#include <iostream>
using namespace std;

void inputmat(int row, int col, int arr[][100])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the element at position (" << i+1 << "," << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
}

void printmat(int row, int col, int arr[][100])
{
    cout << "[\n";
    for (int i = 0; i < row; i++)
    {
        cout << "[ ";
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "]";
}

void addmat(int row, int col, int arr1[][100], int arr2[][100], int arr3[][100])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "\n";
    printmat(row, col, arr3);
}

void submat(int row, int col, int arr1[][100], int arr2[][100], int arr3[][100])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    cout << "\n";
    printmat(row, col, arr3);
}

void mat_multiplication(int row1, int col1, int row2, int col2, int arr1[][100], int arr2[][100], int arr3[][100])
{
    int sum, k;
    for (int i = 0; i < row1; i++)
    {
        k = 0;
        while (k < col2)
        {
            sum = 0;
            for (int j = 0; j < col1; j++)
            {
                sum += arr1[i][j] * arr2[j][k];
            }
            arr3[i][k] = sum;
            k++;
        }
    }
    cout << "\n";
    printmat(row1, col2, arr3);
}

int main()
{
    int row, col;
    int mat1[100][100], mat2[100][100], mat3[100][100];
    
    cout << "For Addition and Subtraction\n";
    cout << "Enter the no. of rows: ";
    cin >> row;
    cout << "Enter the no. of columns: ";
    cin >> col;
    
    cout << "\nEnter the elements of matrix 1:-\n";
    inputmat(row, col, mat1);
    
    cout << "\nEnter the elements of matrix 2:-\n";
    inputmat(row, col, mat2);
    
    cout << "\nAddition:-";
    addmat(row, col, mat1, mat2, mat3);
    
    cout << "\nSubtraction:-";
    submat(row, col, mat1, mat2, mat3);
    
    int row1, col1, row2, col2;
    
    cout << "\nMultiplication\n";
    cout << "Enter the no. of rows for the first matrix: ";
    cin >> row1;
    cout << "Enter the no. of columns for the first matrix: ";
    cin >> col1;
    cout << "Enter the no. of rows for the second matrix: ";
    cin >> row2;
    cout << "Enter the no. of columns for the second matrix: ";
    cin >> col2;
    
    if (col1 == row2)
    {
        cout << "\nEnter the elements of matrix 1:-\n";
        inputmat(row1, col1, mat1);
        
        cout << "\nEnter the elements of matrix 2:-\n";
        inputmat(row2, col2, mat2);
        
        cout << "\nMultiplied Matrix:-";
        mat_multiplication(row1, col1, row2, col2, mat1, mat2, mat3);
    }
    else
    {
        cout << "Given matrices cannot be multiplied";
    }
}
