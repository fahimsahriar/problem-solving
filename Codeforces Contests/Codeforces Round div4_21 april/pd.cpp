#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,b,w;
        w = r = b = 0 ;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            char temp;
            cin>>temp;
            arr[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='W')
            {
                while(arr[i]=='W')
                {
                    if(i==(n-1))
                    {
                        w++;
                        break;
                    }
                    w++;
                    i++;
                }
                if(b>0&&r>0)
                {
                    if(i==(n-1))
                    {
                        cout<<"Yes"<<endl;
                        break;
                    }
                    b = 0;
                    r = 0;
                }
                else
                {
                    if(w==n)
                    {
                        cout<<"Yes"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        break;
                    }

                    //break;
                }
            }
            else
            {
                if(arr[i]=='B')
                {
                    b++;
                }
                else
                {
                    r++;
                }
            }
            if(i==(n-1))
            {
                if(b>0&&r>0)
                {
                    cout<<"Yes"<<endl;
                    break;                }
                else
                {
                    if(w==n)
                    {
                        cout<<"Yes"<<endl;
                        break;
                    }
                    else
                        cout<<"No"<<endl;
                        break;
                }

            }
        }
        //cout<<endl;
    }
}

