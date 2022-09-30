#include <bits/stdc++.h>
using namespace std;
void fillPrimes(vector<int>& prime, int high)
{
	bool ck[high + 1];
	memset(ck, true, sizeof(ck));
	ck[1] = false;
	ck[0] = false;
	for (int i = 2; (i * i) <= high; i++) {
		if (ck[i] == true) {
			for (int j = i * i; j <= sqrt(high); j = j + i) {
				ck[j] = false;
			}
		}
	}
	for (int i = 2; i * i <= high; i++) {
		if (ck[i] == true) {
			prime.push_back(i);
		}
	}
}

void segmentedSieve(int low, int high)
{
	if (low<2 and high>=2){
		low = 2;
	}
	bool prime[high - low + 1];
	memset(prime, true, sizeof(prime));

	vector<int> chprime;
	fillPrimes(chprime, high);
	for (int i : chprime) {
		int lower = (low / i);
		if (lower <= 1) {
			lower = i + i;
		}
		else if (low % i) {
			lower = (lower * i) + i;
		}
		else {
			lower = (lower * i);
		}
		for (int j = lower; j <= high; j = j + i) {
			prime[j - low] = false;
		}
	}
    int finalresult = 0;
	for (int i = low; i <= high; i++) {
		if (prime[i - low] == true) {
			//cout << (i) << " ";
			finalresult++;
		}
	}
	cout<<finalresult<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int low;
        int high;
        cin>>low>>high;
        //cout<<"Primes in range "<<low<<" to "<< high<<" are\n";
        segmentedSieve(low, high);
    }
}
