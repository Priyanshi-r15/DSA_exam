#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array = " ;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i  << "] : ";
        cin >>arr[i];                  //
        
    }
    cout << endl;
    cout << "The original array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;        //original array
    }
    cout << endl;
    cout << "The reverse array is : " << endl;
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << endl;          //reversed array
    }
    
    
    
}