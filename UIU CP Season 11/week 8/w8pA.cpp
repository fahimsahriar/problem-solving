#include <iostream>
#include <vector>
using namespace std;

int check(int x, vector<char> key)
{
    int l = key.size();
    for (int i=0;i<l;i++)
    {
        if(x==1){
            if(key[i]=='r')
            {
                return 1;
            }
        }
        else if(x==2){
            if(key[i]=='g')
            {
                return 1;
            }
        }
        else if(x==3){
            if(key[i]=='b')
            {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    string str;
    while(t!=0)
    {
        int r,whah = 0;
        cin >> str;
        vector<char> key;
        for (char x : str)
        {
            if( x=='r' || x=='g' || x=='b' )
            {
                key.push_back(x);
            }
            else if( x=='R')
            {
                r = check(1,key);
                if(r==1)
                   whah++;
            }
            else if(x=='G')
            {
                r = check(2,key);
                if(r==1)
                   whah++;
            }
            else if( x=='B')
            {
                r = check(3,key);
                if(r==1)
                   whah++;
            }
        }
        if(whah == 3)
            cout << "YES"<<endl;
        else
        cout << "NO"<<endl;
        t--;
    }


    return 0;
}

