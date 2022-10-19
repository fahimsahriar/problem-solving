#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int j,c;
    j = n-1;
    c = 0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==1)
      {
        while(j>i)
        {
          if(arr[j]==0)
          {
            //cout<<"okay:"<<j<<endl;
            c++;
            j--;
            break;
          }
          else
          {
            j--;
          }
        }
      }
    }
    cout<<c<<endl;
  }
  return 0;
}