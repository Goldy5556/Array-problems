#include <iostream>
using namespace std;
int main()
{
  int n, target;
  int *arr;
  cout << "Enter the size of an array : ";
  cin >> n;
  arr = new int[n];
  cout << "\nEnter the elements of array : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Array -> ";
  for (int i = 0; i < n; i++)
  {

    cout << arr[i] << " ";
  }
  cout << "\nEnter the element to delete: ";
  cin >> target;
  cout << "\nArray after deletion process : ";
  for (int i = 0; i < n; i++)
  {
    if (target == arr[i])
    {
      target = i;
      break;
    }
  }
  for (int i = target; i < n-1; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  delete[] arr;
  arr = nullptr;
  return 0;
}