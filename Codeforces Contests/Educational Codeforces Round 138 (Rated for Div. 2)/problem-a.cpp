#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int arr[m][2];
    for(int i=0;i<m;i++)
    {
      cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<m;i++)
    {
      cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
      if(arr[i][0]-1>=0)
    }
  }
  return 0;
}