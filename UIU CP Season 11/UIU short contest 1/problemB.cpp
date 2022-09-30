#include <iostream>
#include <algorithm>

using namespace std;
struct ad
{
    long long int p, k;
};

bool compare( ad a, ad b){
	/** to use another attribute for sorting, just replace 'age' with it eg. (a.roll_no < b.roll_no)
	 the return value determines which student will go first in the sorted array **/
	if(a.p < b.p)
		return 1;
	else
		return 0;
}

int main()
{
    long long int n,k,s,vn;
    vn = s = 0;
    cin>>n>>k;
    ad arr[n];
    for(long long int i=0;i<n;i++)
    {
        long long int t;
        cin>>t;
        arr[i].p = t;
        cin>>t;
        arr[i].k = t;
    }
    sort(arr, arr+n, compare);
    for(long long int i=0;i<n;i++)
    {
        if((arr[i].p - vn)<=k)
        {
            k = k - (arr[i].p - vn);
            vn = arr[i].p;
            //cout<<"position: "<<vn<<"-K:"<<k<<endl;
            k = k + arr[i].k;
            cout<<"position: "<<vn<<"-K:"<<k<<endl;

        }
        else
        {
            cout<<"breaked at position: "<<vn<<"-K:"<<k<<endl;
            break;
        }

        //cout<<"number:"<<arr[i].p<<" value:"<<arr[i].k<<endl;
    }
    if(k>0)
    {
        vn = vn + k;
    }
    cout<<vn;
}
