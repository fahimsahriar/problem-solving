#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;
        int total_camera;
        total_camera = (w/3)*(h/3);
        if(w%3>0)
        {
            if(h%3>0)
            {
                total_camera+= 1 + (h/3) + 1;
            }
            else
            {
               total_camera+= (h/3);
            }
        }
        else
        {
           if(h%3>0)
            {
                total_camera+= 1;
            }
        }
        cout<<total_camera<<endl;
    }
    return 0;
}
