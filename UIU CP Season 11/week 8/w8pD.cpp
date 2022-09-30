#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        temp = ((n/7)*7)+7;
        if(n/10 == temp/10){
            cout<<((n/7)*7)+7<<endl;
        }
        else
        {
            cout<<((n/7)*7)<<endl;
        }
    }
}
