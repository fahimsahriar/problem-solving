#include <iostream>

using namespace std;

int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main( ) {
    extendedEuclid(16, 10);
    cout << "The GCD of 16 and 10 is " << d << endl;
    cout<<"The GCD of 16 and 10 is: "<<GCD(16,10)<<endl;
    int n,r;
    n = 21;
    r = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(GCD(i,j)==1)
            {
                r++;
            }
        }
        cout<<"phi("<<i<<"): "<<r<<endl;
        cout<<"Factorization phi("<<i<<"): "<<phi(i)<<endl;
        r = 0;
    }
    //cout << "Coefficients x and y are "<< x <<  " and  " << y << endl;
    return 0;
}
