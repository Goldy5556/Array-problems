#include <iostream>
using namespace std;
int main(){
    int n,i,max,second;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *arr = new int [n];
    cout<<"\nEnter the elements of array : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nArray -> ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    max=second=0;
    for(int i = 0;i<n ; i++){
        if(arr[i]>max){
            second = max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max ){
            second = arr[i];
        }
    }
    cout<<"\nSecond largest element : "<<second;
    delete[] arr;
}