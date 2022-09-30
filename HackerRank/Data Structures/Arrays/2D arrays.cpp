#include <iostream>
#include <vector>
using namespace std;

int hourglassSum(int arr[6][6]) {
    signed int a,b,c,d,e,f,g,sum,msum;
    msum = -100;
    for(int j=0;j<=3;j++)
    {
        for(int i=1;i<=4;i++)
        {
            a = arr[j][i+1];
            b = arr[j][i];
            c = arr[j][i-1];
            d = arr[j+1][i];
            e = arr[j+2][i+1];
            f = arr[j+2][i];
            g = arr[j+2][i-1];
            sum = a+b+c+d+e+f+g;
            cout<<"sum at"<<sum<<endl;
            if(sum>msum)
            {
                msum = sum;
            }
        }
    }
    return msum;
}

int main()
{
    int arr[6][6];
    int temp;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
                cin>>temp;
                arr[i][j] = temp;
        }
    }
    int r;
    r = hourglassSum(arr);
    cout<<r<<endl;
}
