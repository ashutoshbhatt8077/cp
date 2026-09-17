


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
        vector<int> temp(n);
        for(auto &it:temp)cin>>it;
        vector<bool> vis(n,true);
        int cnt=0;
        for(int i=0;i<temp.size();i++)
        {
            int ind=temp[i]*(i+1);
            for(int j=ind;j<ind+i+1;j++)
            {
                if(j<n)
                vis[j]=false;
            }
        }
        for(auto it:vis)if(it)cnt++;
        cout<<cnt<<endl;
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i])
            cout<<i<<" ";
        }
        // for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}