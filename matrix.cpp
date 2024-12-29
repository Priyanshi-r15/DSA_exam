#include<iostream>
using namespace std;
int main()
{
    int row , col;
   cout << "Enter the rows of the array = " ;
    cin >> row; 
    cout << "Enter the columns of the array = ";
    cin >> col;

    cout << endl;
    
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << "arr[" << i << "] " << "[" << j << "] : " ;
            cin >> arr[i][j]; //taking data from the user
       }
       
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  "; //display the array
        }
        cout << endl;
    }
    cout << endl;


     int array[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << "arr[" << i << "] " << "[" << j << "] : " ;
            cin >> array[i][j]; //taking data from the user
       }
       
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "  "; //display the array
        }
        cout << endl;
    }
    cout << endl;
    int total[row][col];
    if (row == col)
    {
        cout << "the addition of two arrays are : " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                 total[i][j] = arr[i][j]+array[i][j];
                cout << total[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        return 1;
    }
    
   
}