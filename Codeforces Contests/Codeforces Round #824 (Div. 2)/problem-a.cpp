#include <iostream>
#include<math.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    long long int d3,d2,d1,l1,l2,l3;
    cin>>d3;
    d1 = 2;
    d2 = ceil((d3-2)/3) + 3;
    //cout<<"ceil:"<<ceil((d3-2)/3)<<endl;
    l1 = 1;
    l2 = d2 - 3;
    l3 = d3 - d2-1;
    //<<d1<<" "<<d2<<" "<<d3<<" "<<l1<<" "<<l2<<" "<<l3<<endl;
    //cout<<"difference:"<<abs(l1-l2)<<" "<<abs(l2-l3)<<" "<<abs(l3-l1)<<endl;
    long long int a,b,c,mi;
    a =abs(l1-l2);
    b = abs(l2-l3);
    c = abs(l3-l1);
    if(a>b)
    {
      if(c>b)
      {
        mi = b;
      }
      else{
        mi = c;
      }
    }else
    {
      if(a>c)
      {
        mi = c;
      }
      else{
        mi = a;
      }
    }
    cout<<mi<<endl;
  }
  return 0;
}