#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue <int , vector <int>, greater <int>> p;

    p.push(10);
    p.push(17);
    p.push(6);
    p.push(18);

    while(!p.empty())
    {
        int t = p.top();
        p.pop();
        cout<<t<<" ";
    }
}
