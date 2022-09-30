#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n,m;
      cin>>n>>m;
      int a[n];
      for(int i=0;i<n;i++)
      {
          int temp;
          cin>>temp;
          a[i] = temp;
      }
      char s[m];
      for(int i=0;i<m;i++)
      {
          s[i] = 'B';
      }

      //main area


      for(int i=0;i<n;i++)
      {
          int ai, mi;
          ai = a[i];
          mi = m+1-a[i];
          //cout<<"The ai is:"<<ai<<" and the mi is:"<<mi<<endl;
          if(ai<=mi)
          {
              if(s[ai-1]=='A')
              {
                  s[mi-1] = 'A';
              }
              else
              {
                  s[ai-1] = 'A';
              }
          }
          else
          {
              if(s[mi-1]=='A')
              {
                  s[ai-1] = 'A';
              }
              else
              {
                  s[mi-1] = 'A';
              }
          }
      }
      for(int i=0;i<m;i++)
      {
          cout<<s[i];
      }
      cout<<endl;
  }
}
