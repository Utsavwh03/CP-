#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
void solve()
{
    pair<int,int> arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}