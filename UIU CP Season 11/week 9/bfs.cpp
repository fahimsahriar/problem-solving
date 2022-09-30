#include <bits/stdc++.h>
#include <vector>

using namespace std;
int totalCost = INT_MAX;
vector <vector <int>> arr;
int endX = 2;
int endY = 3;
void solve(int x, int y,int cost)
{
    if(x==endX&&y==endY)
    {
        //cout<<x<<" "<<y<<" Cost:"<<cost<<endl;
        if(cost<totalCost) totalCost = cost;
        return;
    }
    if(x<4&&y<4)
    {
        solve(x+1,y,cost+arr[x][y]);
        solve(x,y+1,cost+arr[x][y]);
    }
    //cout<<arr[x][y];
}
int main()
{
    arr = {{1,1,4,5},{1,1,9,1},{3,2,1,5},{6,5,10,2}};
//    for(vector <int> v:arr)
//    {
//        for(int t:v)
//        {
//            cout<<t<<" ";
//        }
//        cout<<endl;
//    }
    solve(0,0,0-arr[0][0]);
    cout<<totalCost;
    return 0;
}
