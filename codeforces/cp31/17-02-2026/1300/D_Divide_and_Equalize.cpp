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
        f(i,0,n)cin>>temp[i];
        map<ll,ll> ma;
        for(auto it:temp)
        {
         ll i=it;
         ll j=2;
         while(j*j<=i)
         {
            if(i%j==0)
            {
                ma[j]++;
                i/=j;
                j=2;
            }
            else
            {
                j++;
            }
         }
         if(i!=1)
         ma[i]++;
        }
        bool f=true;
        for(auto it:ma)
        if(it.second%n!=0)
        f=false;
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }

    return 0;
}