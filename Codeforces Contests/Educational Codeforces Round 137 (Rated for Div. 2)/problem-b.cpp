#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n==3)
    {
      cout<<"1 "<<"3 "<<"2 "<<endl;
    }
    else{
      cout<<n-1<<" "<<"2 ";
      for(int i = n-2;i>0;i--)
      {
        if(i==2)
        {
          cout<<n<<" ";
        }else
        cout<<i<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}