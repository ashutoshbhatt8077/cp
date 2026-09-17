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
        vector<ll> temp(n),remp(n);
        for(auto &it:temp)cin>>it;
        for(auto &it:remp)cin>>it;
        stack<int> a,b;
        for(int i=0;i<n;i++)
        {
            a.push(temp[i]);
            b.push(remp[i]);
        }
        while(!a.empty())
        {
            int i=a.top();
            a.pop();
            while(!b.empty()&&b.top()==i)
            b.pop();
        }
        if(!b.empty())
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }

    return 0;
}