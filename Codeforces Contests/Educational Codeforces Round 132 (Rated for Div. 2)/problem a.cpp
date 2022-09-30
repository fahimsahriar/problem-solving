#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int key[3];
        cin>>key[0]>>key[1]>>key[2];
        if(x==1)
        {
            if(key[0]==0)
            {
                cout<<"NO"<<endl;
            }
            else if(key[0]==2)
            {
                if(key[1]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[1]==3)
                {
                    cout<<"YES"<<endl;
                }
            }
            else if(key[0]==3)
            {
                if(key[2]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[2]==2)
                {
                    cout<<"YES"<<endl;
                }
            }
        }
        else if(x==2)
        {
            if(key[1]==0)
            {
                cout<<"NO"<<endl;
            }
            else if(key[1]==1)
            {
                if(key[0]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[0]==3)
                {
                    cout<<"YES"<<endl;
                }
            }
            else if(key[1]==3)
            {
                if(key[2]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[2]==1)
                {
                    cout<<"YES"<<endl;
                }
            }
        }
        else if(x==3)
        {
            if(key[2]==0)
            {
                cout<<"NO"<<endl;
            }
            else if(key[2]==2)
            {
                if(key[1]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[1]==1)
                {
                    cout<<"YES"<<endl;
                }
            }
            else if(key[2]==1)
            {
                if(key[0]==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(key[0]==2)
                {
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    return 0;
}
