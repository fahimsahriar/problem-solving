#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if((n/2)<2){
            if((m/2)<2){
                cout<<(n/2)+1<<" "<<(m/2)+1<<endl;
            }
            else{
                cout<<n<<" "<<m<<endl;
            }
        }
        else if((m/2)<2)
        {
            if((n/2)<2){
                cout<<(n/2)+1<<" "<<(m/2)+1<<endl;
            }
            else{
                cout<<n<<" "<<m<<endl;
            }
        }
        else{
            cout<<n<<" "<<m<<endl;
        }
        //cout<<n<<" "<<m<<endl;
    }
}
