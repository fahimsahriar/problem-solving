#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,h3;
    cin>>h1>>h2>>h3;
    int h1arr[h1],h2arr[h2],h3arr[h3];
    for(int i=0;i<h1;i++)
    {
        cin>>h1arr[i];
    }
    for(int j=0;j<h2;j++)
    {
        cin>>h2arr[j];
    }
    for(int k=0;k<h3;k++)
    {
        cin>>h3arr[k];
    }
    int max_result = 0;
    int max_result_temp_one = 0;
    int max_result_temp_two = 0;
    int max_result_temp_three = 0;
    for(int i=h1-1;i>=0;i--)
    {
        max_result_temp_one+=h1arr[i];
        for(int j=h2-1;j>=0;j--)
        {
            max_result_temp_two+=h2arr[j];
            if(max_result_temp_one!=max_result_temp_two)
            {
                continue;
                //max_result_temp_two = 0;
            }
            for(int k=h3-1;k>=0;k--)
            {
                max_result_temp_three+=h3arr[k];
                if(max_result_temp_two!=max_result_temp_three)
                {
                    continue;
                    //max_result_temp_three = 0;
                }
                //cout<<max_result_temp_one<<" "<<max_result_temp_two<<" "<<max_result_temp_three<<endl;
                if(max_result_temp_one==max_result_temp_two&&max_result_temp_two==max_result_temp_three)
                {
                    if(max_result_temp_three>max_result)
                    {
                        max_result = max_result_temp_three;
                    }
                }
            }
            max_result_temp_three = 0;
        }
        max_result_temp_two = 0;
    }
    cout<<max_result<<endl;
    return 0;
}
