#include <iostream>
using namespace std;


int power(int x,int y)
{
  if(y==1)
  {
    return x;
  }else{
    return x*power(x,y-1);
  }
}

int main() {
  int x,y;
  cin>>x>>y;
  cout <<power(x,y)<<endl;
  return 0;
}