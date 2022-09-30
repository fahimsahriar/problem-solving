#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string msg;
    stack <char> key;
    key.push('g');
    key.push('n');
    key.push('u');key.push('s');
    key.push('m');
    key.push('a');key.push('S');
    cin>>msg;
    //cout<<msg<<endl;
    int n;
    n = msg.length();
    //cout<<n;
    for(int i=0;i<n;i++)
    {
        if(key.empty())
        {
            cout<<"SRBD"<<endl;
            return 0;
        }
        if(key.top()==msg[i])
        {
            key.pop();
        }
    }
    if(key.empty())
    {
        cout<<"SRBD"<<endl;
    }
    else
        cout<<"GHOST"<<endl;
	return 0;
}

