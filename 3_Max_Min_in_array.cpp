#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "\nEnter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "\nMaximum element in the array: " << max << endl;
    cout << "Minimum element in the array: " << min << endl;

    delete[] arr;
    return 0;
}