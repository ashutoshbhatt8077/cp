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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
       ll a,b,c,m;
       cin>>a>>b>>c>>m;
       ll lcmab=(a*b)/(gcd(a,b));  
       ll lcmcb=(c*b)/(gcd(c,b));  
       ll lcmac=(a*c)/(gcd(a,c));  
       ll lcmabc=(lcmac*b)/(gcd(lcmac,b));
       ll total=(m/lcmabc);
       ll intab=m/lcmab-total;
       ll intac=m/lcmac-total;
       ll intcb=m/lcmcb-total;
       ll ac=m/a-intab-intac-total;
       ll bc=m/b-intab-intcb-total;
       ll cc=m/c-intcb-intac-total;
       cout<<ac*6+(intac+intab)*3+total*2<<" "<<bc*6+(intcb+intab)*3+total*2<<" "<<cc*6+(intcb+intac)*3+total*2<<endl;
    }

    return 0;
}