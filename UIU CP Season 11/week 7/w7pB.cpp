#include <iostream>
#include <vector>
using namespace std;
vector<int> avector;

//function sorts using mergesort.
vector<int> mergeSort(vector<int> avector2) {
    if (avector2.size()>1) {
        int mid = avector2.size()/2;
        //C++ Equivalent to using Python Slices
        vector<int> lefthalf(avector2.begin(),avector2.begin()+mid);
        vector<int> righthalf(avector2.begin()+mid,avector2.begin()+avector2.size());

        lefthalf = mergeSort(lefthalf);
        righthalf = mergeSort(righthalf);

        unsigned i = 0;
        unsigned j = 0;
        unsigned k = 0;
        while (i < lefthalf.size() && j < righthalf.size()) {
            if (lefthalf[i] < righthalf[j]) {
                avector2[k]=lefthalf[i];
                i++;
            } else {
                avector2[k] = righthalf[j];
                j++;
            }
            k++;
        }

        while (i<lefthalf.size()) {
            avector2[k] = lefthalf[i];
            i++;
            k++;
        }

        while (j<righthalf.size()) {
            avector2[k]=righthalf[j];
            j++;
            k++;
        }

    }

    return avector2;
}

float runningMedian(int i)
{
    float result,mid;
    int m = i+1;
    avector = mergeSort(avector);
    mid = (m/2);
    if(m%2==0)
    {
        //cout<<"median in:"<<avector[mid-1]<<" "<<avector[mid]<<endl;
        mid = (float)avector[mid] + (float)avector[mid-1];
        result = (float)mid/2;
        return result;

    }
    else
    {
        result = (float)avector[mid];
        return result;
    }
}

int main() {
    float result;
    int t,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        avector.push_back(t);
        result = runningMedian(i);
        printf("%.1f\n",result);
    }

    return 0;
}
