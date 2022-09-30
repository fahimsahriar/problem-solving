#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
//        cout>>lower_result<<"-"<<with_highe<<<<"-"before_highe<<"-"<<divi<<"-"resu<<endl;
        int l,h,a,lower_result, with_higher, before_higher, divi, resu;
        cin>>l>>h>>a;
        if(l<a)
        {
            lower_result = (a-1)/a + (a-1);
        }
        else
        {
            lower_result = 0;
        }
        with_higher = (h/a) + h%a;
        //cout<<"with_higher:"<<with_higher<<endl;
        before_higher = (h/a);
        divi = (before_higher*a) - 1;
        //cout<<"divi:"<<divi<<endl;
        before_higher= (divi/a) + (a-1);
        if(before_higher<l)
        {
            before_higher = lower_result;
        }
        //cout<<"before_higher:"<<before_higher<<endl;
        if(with_higher>before_higher)
        {
            resu = with_higher;
        }
        else
        {
            resu = before_higher;
        }
        cout<<resu<<endl;
    }


	return 0;
}
