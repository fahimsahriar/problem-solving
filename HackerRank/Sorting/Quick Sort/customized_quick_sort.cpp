#include <bits/stdc++.h>
using namespace std;
int partition_arr(int arr[], int startind, int endind){
  ///Partition the array here and return the index of the pivot item after partition

  cout<<"Array entered: ";
  for(int ind=startind;ind<endind;ind++){ 
    cout<< arr[ind] <<" ";
  }
  cout<<endl;

  int x;
  x = arr[endind]; //pivot
  
  int i;
  i = startind-1;
  for(int j=startind;j<endind;j++){
    if(arr[j]<=x){ //swapping if j'th element is less than pivot
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[endind]);
  cout<<"Changed Array: ";
  for(int ind=startind;ind<endind;ind++){ 
    cout<< arr[ind] <<" ";
  }
  cout<<endl;
  return i+1;
}
void QuickSort(int arr[], int startind, int endind){ 
  if(startind>endind){
    ///empty array
    cout<<"Empty Array"<<endl;
  }
  else if(startind==endind){
    ///array with 1 element
    cout<<"Array with 1 element"<<endl;
  }
  else{
    ///Partition the array
    int p;
    p = partition_arr(arr, startind, endind);
    ///QuickSort the left subarray
    QuickSort(arr,startind,p-1);
    ///QuickSort the right subarray
    QuickSort(arr,p,endind);
  }
}
int main()
{
  int arr[]={2,8,7,1,3,5,6,4};
  //int arr[]={};
  //int arr[]={2};
  int sz=sizeof(arr)/sizeof(int); 
  QuickSort(arr,0,sz-1);

  ///printing the output
  cout<<"The final array: ";
  for(int ind=0;ind<sz;ind++){ 
    cout<< arr[ind] <<" ";
  }
  cout<<endl;
  return 0;
}