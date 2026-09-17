#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long i=s;i<e;i++)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define si set<int>
#define sc set<char>
#define ub(hei,num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei,num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll temp(n);
        for(auto &it:temp) cin>>it;

        vll a(n);

        for(int i = 1; i < n - 1; i++) {
            a[i] = (temp[i+1] - 2 * temp[i] + temp[i-1]) / 2;
        }

        ll s1 = 0;
        for(int i = 1; i < n - 1; i++) {
            s1 += a[i] * i;
        }
        a[n-1] = (temp[0] - s1) / (n - 1);

        ll sn = 0;
        for(int i = 1; i < n; i++) {
            sn += a[i] * abs(i - (n - 1));
        }
        a[0] = (temp[n-1] - sn) / (n - 1);

        for(int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}