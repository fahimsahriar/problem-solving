#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

priority_queue <int , vector <int>> lower;
priority_queue <int , vector <int>, greater <int>> higher;

void runningMedian(int t)
{
    float f;
    lower.push(t);
    higher.push(lower.top());
    lower.pop();

    while(higher.size()>lower.size())
    {
        lower.push(higher.top());
        higher.pop();
    }
    int temp1 = lower.top();
    if(higher.size()<lower.size())
    {
        f = float(lower.top());
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << f<<endl;
    }
    else
    {
        int temp2 = higher.top();
        f = float(temp1+temp2);
        f = f/2;
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << f<<endl;
    }
}
int main()
{
    int n,t;
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&t);
        runningMedian(t);
    }

    return 0;
}

