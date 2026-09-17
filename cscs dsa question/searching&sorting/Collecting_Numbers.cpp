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
    int t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<int,int>> temp(n);
        for(int i=0;i<temp.size();i++)
        {
            cin>>temp[i].first;
            temp[i].second=i+1;
        }
        sort(temp.begin(),temp.end());
        ll cnt=1;
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i].second<temp[i-1].second)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}