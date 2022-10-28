#include <iostream>
using namespace std;


void digi_counter(int x,int c)
{
  if(x/10==0)
  {
    cout<<c+1<<endl;
  }else{
    c++;
    digi_counter(x/10, c);
  }
}
int main() {
  int x;
  cin>>x;
  digi_counter(x,0);
  return 0;
}