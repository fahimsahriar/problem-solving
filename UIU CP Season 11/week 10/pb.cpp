#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
//        cout>>lower_result<<"-"<<with_highe<<<<"-"before_highe<<"-"<<divi<<"-"resu<<endl;
        int l,h,a,highest_lower, with_higher, highest_higher, divi, resu;
        highest_lower= with_higher= highest_higher= divi= resu =0;
        cin>>l>>h>>a;
        if(l==h||h<a)
        {

                with_higher = h/a;
                with_higher = with_higher + h%a;

            resu = with_higher;
        }
        else
        {
            if(l<a)
        {
            highest_lower = (a-1)/a + (a-1);
        }
        else
        {
            highest_lower = 0;
        }
        with_higher = h/a;
        if(h<a)
        {
            with_higher = with_higher + a-h;
        }
        else
            with_higher = with_higher + h%a;
        //cout<<"h n w"<<h%7<<endl;
        //cout<<"with_higher:"<<with_higher<<endl;
        highest_higher = (h/a);
        divi = (highest_higher*a) - 1;
        //cout<<"divi:"<<divi<<endl;
        if(divi<1)
        {
            highest_higher= a-1;
        }
        else{
            highest_higher= (divi/a) + (a-1);
        }
        if(divi<l)
        {
            highest_higher = with_higher;
        }
        if(divi>h)
        {
            highest_higher = with_higher;
        }
        //cout<<"highest_higher:"<<highest_higher<<endl;
        if(with_higher>highest_higher)
        {
            resu = with_higher;
        }
        else
        {
            resu = highest_higher;
        }
        }
        cout<<resu<<endl;
    }


	return 0;
}
