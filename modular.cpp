// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include<utility>
using namespace std;
using lli = long long;
const lli mod = 1e9+7;
lli binaryexpo(lli a, lli n) //O(log(n))
{
    lli r = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            r = (r * a)%mod;
        }
        n = n / 2;
        a = (a * a)%mod;
    }
    return r;
}
lli mul(lli a,lli b)
{
    lli ans=(a*b)%mod;
    if(ans<0)
    ans+=mod;
    return ans;
}
lli modinv(lli a)
{
   return binaryexpo(a,mod-2);
}
void primefactors(lli a)
{
    vector<pair<lli,lli> >v;
    for (lli i=2; i<=a; i++)
    {
        
        if(a%i==0)
        {
           lli cnt=0;
            while(a%i ==0)
            {
                cnt++;
                a=a/i;
            }
            v.push_back(make_pair(i,cnt));
        }
    }
   for (auto i : v)
   {
     cout << i.first<<" ->"<<i.second<<endl;
   }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout<<modinv(18526262);
    primefactors(60);
}
