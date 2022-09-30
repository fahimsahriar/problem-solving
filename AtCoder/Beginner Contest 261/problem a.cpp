#include <iostream>
using namespace std;

int main() {
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2<r1)
    {
        if(l1<r2)
        {
            if(r1<=r2)
            {
                if(l1<=l2)
                {
                    cout<<r1-l2<<endl;
                }
                else
                {
                    cout<<r1-l1<<endl;
                }
            }
            else
            {
                if(l1<=l2)
                {
                    cout<<r2-l2<<endl;
                }
                else
                {
                    cout<<r2-l1<<endl;
                }
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
