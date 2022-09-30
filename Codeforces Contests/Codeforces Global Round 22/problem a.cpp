#include <iostream>
#include <vector>
using namespace std;
void MergeSortedIntervals(vector<long long int>& v, int s, int m, int e) {

    // temp is used to temporary store the vector obtained by merging
    // elements from [s to m] and [m+1 to e] in v
	vector<long long int> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] >= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}
void MergeSort(vector<long long int>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int damage,temp;
        cin>>n;
        long long int a[n],b[n];
        vector<long long int> arr_z,arr_o;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            b[i] = temp;
        }
        //input section ends, now the main algorithm

        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                arr_o.push_back(b[i]);
            }
            else
            {
                arr_z.push_back(b[i]);
            }
        }
        int size_of_zero, size_of_one, count_of_one,count_of_zero;
        size_of_zero = arr_z.size();
        size_of_one = arr_o.size();
        MergeSort(arr_z, 0, size_of_zero - 1);
        MergeSort(arr_o, 0, size_of_one - 1);

        damage = count_of_one = count_of_zero = 0;
        int prev = -1;
        if(size_of_zero>size_of_one)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0 && size_of_zero>count_of_zero)
                {
                    if(prev==-1)
                    {
                        damage = damage + arr_z[size_of_zero-1];
                        //cout<<"damage inserted:"<<arr_z[size_of_zero-1]<<endl;
                        prev = 0;
                        size_of_zero--;
                    }
                    else if(prev==1)
                    {
                        damage = damage + 2*(arr_z[count_of_zero]);
                        //cout<<"damage inserted:"<<2*(arr_z[count_of_zero])<<endl;
                        prev = 0;
                        count_of_zero++;
                    }
                    else
                    {
                        damage = damage + arr_z[count_of_zero];
                        //cout<<"damage inserted:"<<arr_z[count_of_zero]<<endl;
                        prev = 0;
                        count_of_zero++;
                    }
                }
                else if(i%2==1 && size_of_one>count_of_one)
                {
                    if(prev==-1)
                    {
                        damage = damage + arr_o[size_of_one-1];
                        //cout<<"damage inserted:"<<arr_o[size_of_one-1]<<endl;
                        prev = 1;
                        size_of_one--;
                    }
                    else if(prev==0)
                    {
                        damage = damage + 2*(arr_o[count_of_one]);
                        //cout<<"damage inserted:"<<2*(arr_o[count_of_one])<<endl;
                        prev = 1;
                        count_of_one++;
                    }
                    else
                    {
                        damage = damage + arr_o[count_of_one];
                        //cout<<"damage inserted:"<<arr_o[count_of_one]<<endl;
                        prev = 1;
                        count_of_one++;
                    }

                }
                else if(size_of_one<=count_of_one)
                {
                    while(size_of_zero>count_of_zero)
                    {
                        if(prev==1)
                        {
                            damage = damage + 2*arr_z[count_of_zero];
                            //cout<<"damage inserted:"<<2*arr_z[count_of_zero]<<endl;
                        }
                        else
                        {
                            damage = damage + arr_z[count_of_zero];
                            //cout<<"damage inserted:"<<arr_z[count_of_zero]<<endl;
                        }
                        count_of_zero++;
                        i++;
                    }
                }
                else
                {
                    while(size_of_one>count_of_one)
                    {
                        if(prev==0)
                        {
                            damage = damage + 2*arr_o[count_of_one];
                            //cout<<"damage inserted:"<<2*arr_o[count_of_one]<<endl;
                        }
                        else
                        {
                            damage = damage + arr_o[count_of_one];
                            //cout<<"damage inserted:"<<arr_o[count_of_one]<<endl;
                        }
                        count_of_one++;
                        i++;
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0 && size_of_one>count_of_one)
                {
                    if(prev==-1)
                    {
                        damage = damage + arr_o[size_of_one-1];
                        //cout<<"damage inserted:"<<arr_o[size_of_one-1]<<endl;
                        prev = 1;
                        size_of_one--;
                    }
                    else if(prev==0)
                    {
                        damage = damage + 2*arr_o[count_of_one];
                        //<<"damage inserted:"<<2*arr_o[count_of_one]<<endl;
                        prev = 1;
                        count_of_one++;
                    }
                    else
                    {
                        damage = damage + arr_o[count_of_one];
                        //cout<<"damage inserted:"<<arr_o[count_of_one]<<endl;
                        prev = 1;
                        count_of_one++;
                    }
                }
                else if(i%2==1 && size_of_zero>count_of_zero)
                {
                    if(prev==-1)
                    {
                        damage = damage + arr_z[size_of_zero-1];
                        //cout<<"damage inserted:"<<arr_z[size_of_zero-1]<<endl;
                        prev = 0;
                        size_of_zero--;
                    }
                    else if(prev==1)
                    {
                        damage = damage + 2*arr_z[count_of_zero];
                        //cout<<"damage inserted:"<<2*arr_z[count_of_zero]<<endl;
                        prev = 0;
                        count_of_zero++;
                    }
                    else
                    {
                        damage = damage + arr_z[count_of_zero];
                        //<<"damage inserted:"<<arr_z[count_of_zero]<<endl;
                        prev = 0;
                        count_of_zero++;
                    }

                }
                else if(size_of_one<=count_of_one)
                {
                    while(size_of_zero>count_of_zero)
                    {
                        if(prev==1)
                        {
                            damage = damage + 2*arr_z[count_of_zero];
                            //cout<<"damage inserted:"<<2*arr_z[count_of_zero]<<endl;
                        }
                        else
                        {
                            damage = damage + arr_z[count_of_zero];
                            //cout<<"damage inserted:"<<arr_z[count_of_zero]<<endl;
                        }

                        count_of_zero++;
                        i++;
                    }
                }
                else
                {
                    while(size_of_one>count_of_one)
                    {
                        if(prev==0)
                        {
                            damage = damage + 2*arr_o[count_of_one];
                            //cout<<"damage inserted:"<<2*arr_o[count_of_one]<<endl;
                        }

                        else
                        {
                            damage = damage + arr_o[count_of_one];
                            //cout<<"damage inserted:"<<arr_o[count_of_one]<<endl;
                        }

                        count_of_one++;
                        i++;
                    }
                }
            }
        }
        cout<<damage<<endl;
    }
}
