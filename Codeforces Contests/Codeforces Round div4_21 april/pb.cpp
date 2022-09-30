// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	unordered_map<int, int> mp;

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// Traverse through map and print frequencies
	for (auto x : mp)
    {
        if(x.second>=3)
        {
            cout<<x.first<<endl;
            return ;
        }

    }
    cout<<"-1"<<endl;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int temp, arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            arr[i] = temp;
        }
        countFreq(arr, n);
    }
	return 0;
}
