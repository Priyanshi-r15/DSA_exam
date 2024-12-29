#include <iostream>

using namespace std;

void merge(int a[], int low, int mid, int high)
{

    int size = 0;
    int arr[high - low + 1]; // 5 - 0 + 1 = 6
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            arr[size] = a[i];
            i++;
            size++;
        }
        else
        {
            arr[size] = a[j];
            j++;
            size++;
        }
    }

    while (i <= mid)
    {
        arr[size] = a[i];
        i++;
        size++;
    }

    while (j <= high)
    {
        arr[size] = a[j];
        j++;
        size++;
    }
    
    for (int i = 0; i < size; i++)
    {
        a[low + i] = arr[i];
    }
    
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);

    }
    
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;  // 6

    int a[n];

    for (int i = 0; i < n; i++) // 14, 27, 72, 13, 10, 2
    {
        cout << "a[" << i <<"] = ";
        cin >> a[i];
    }

    cout << endl;
    cout << "THE ARRAY IS : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    cout << endl;

    mergeSort(a, 0, n - 1);

    cout << "SORTED ARRAY IS :  " << endl;;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;
}