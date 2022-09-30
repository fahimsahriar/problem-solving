#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n;
        r = pow(2, n);
        cout << r-1<<endl;
    }
    return 0;
}
