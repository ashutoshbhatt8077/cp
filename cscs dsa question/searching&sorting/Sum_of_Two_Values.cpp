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
    //cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<pair<int,int>> temp(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp[i].first;
            temp[i].second=i+1;
        }
        sort(temp.begin(),temp.end());
        int l=0,r=n-1;
        while(l<r)
        {
            if(temp[l].first+temp[r].first==x)
            {
                cout<<min(temp[r].second,temp[l].second)<<" "<<max(temp[r].second,temp[l].second)<<endl;
                return 0;
            }
            else if(temp[l].first+temp[r].first<x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}