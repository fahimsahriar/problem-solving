#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--)
	{
		int n,k,o,r;
		cin>>n>>k;
		int arr[n];
		o = 0;
		r = n;
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
			{
				o++;
			}
		}
		//cout<<o<<endl;
		int temp;
		for(int i=0;i<n-1;i++)
		{
			if(o>0 && k<=r)
			{
				if(k==r)
				{
					cout<<"YES"<<endl;
					r = r - k;
					break;
				}
				else
				{
					temp = 0;
					//cout<<arr[i]<<" "<<arr[i+1]<<endl;
					if(arr[i]==1)
					{
						temp++;
					}
					if(arr[i+1]==1)
					{
						temp++;
					}
					//cout<<"this step: "<<temp<<endl;
					//cout<<"total: "<<o<<endl;
					r--;
				}
			}
			else
			{
				cout<<"NO"<<endl;
				break;
			}
		}
	}
	return 0;
}