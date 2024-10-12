#include <iostream> 
using namespace std;
int main(){
  int n , i;
  cout<<"Enter the size of Array : ";
  cin>>n;
  int *arr = new int[n];
  cout<<"Enter the elements of Array : "<<endl;
  for(int i = 0 ; i<n;i++){
    cin>>arr[i];
  }
  cout<<"\nArray Before Reversal -> ";
  for(i=0;i<n;i++){

  cout<<arr[i]<<" ";
  }
  cout<<"\nArray After Reversal -> ";
  for(i=n-1;i>=0;i--){
  cout<<arr[i]<<" ";
  }
  delete [] arr;
}