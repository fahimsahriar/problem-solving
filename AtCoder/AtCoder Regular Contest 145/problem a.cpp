#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(str[0]=='A'&&str[n-1]=='B')
    {
        cout<<"No"<<endl;
    }
    else if(n==2&&(str[0]!=str[1]))
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
