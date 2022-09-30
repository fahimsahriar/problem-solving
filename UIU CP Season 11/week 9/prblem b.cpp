// C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        string arr;
        cin>>arr;
        if(arr[0]==arr[arr.size()-1])
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        //cout<<arr;
    }


	return 0;
}
