// C++ program for illustration of swap() function
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int finish[], int n)
{
    int i, key, key2, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 		
 		key2 = finish[i];
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            finish[j +1] = finish[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        finish[j + 1] = key2;
    }
}

int main()
{
	int start[] = {1, 3, 0, 5, 8, 5};
	int finish[] = {2, 4, 6, 7, 9, 9};

	int n = sizeof(start) / sizeof(start[0]);
	insertionSort(finish, start, n);

	cout<<"Start time: ";
	for(int i=0;i<n;i++)
		cout<<start[i]<<" ";
	cout<<endl;
	cout<<"End time: ";
	for(int i=0;i<n;i++)
		cout<<finish[i]<<" ";

	cout<<endl<<"Output: 0 ";
	int prev_finish;
	prev_finish = finish[0];
	for(int i=1;i<n;i++){

		if(prev_finish<=start[i]){
			cout<<i<<" ";
			prev_finish = finish[i];
		}
	}
	return 0;
}
