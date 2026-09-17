#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define ub(hei, num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei, num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()
void solve()
{
    ll n, k;
    cin >> n >> k;
    vll temp(n);
    for (auto &it : temp)
        cin >> it;
    sort(temp.begin(),temp.end());
    ll score=0;
    for(int i=0;i<n;i++)
    if(temp[i]-k>0||i>=n/2)
    score+=temp[i]-k;
    cout<<score<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}