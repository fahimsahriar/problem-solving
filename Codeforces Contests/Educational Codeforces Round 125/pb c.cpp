#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

void isPalindrome(string S)
{
	string P = S;
    reverse(P.begin(), P.end());
	int c = 0;
	while(S!=P){
        P.erase(P.begin() + 1);
        S.erase((S.length()-1) - 1);
        P = S;
        reverse(P.begin(), P.end());
        c++;
	}
	cout<<c<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,o;
	    cin>>n;
	    string s;
	    cin>>s;
	    isPalindrome(s);
    }
	return 0;
}

