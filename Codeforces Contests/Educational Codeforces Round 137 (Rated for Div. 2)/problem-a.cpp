#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		n = 10 - n -1;
		//cout<<n<<endl;
		int temp2;
		temp2 = 0;
		for(int i=n;i>0;i--)
		{
			temp2 = temp2 + 6*i;
			//cout<<6<<" "<<i<<" "<<temp2<<endl;
		}
		cout<<temp2<<endl;
	}
	return 0;
}