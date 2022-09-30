#include <iostream>
using namespace std;

void go(int n)
{
    if(n>=1400)
    {
        if(n>=1600)
        {
            if(n>=1900)
            {
                cout<<"Division 1"<<endl;
            }
            else
            {
                cout<<"Division 2"<<endl;
            }

        }
        else
        {
            cout<<"Division 3"<<endl;
        }

    }
    else
    {
        cout<<"Division 4"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        go(n);
    }
}
        if(x.second>=3)
        {
            cout<<x.first<<endl;
            return ;
        }
