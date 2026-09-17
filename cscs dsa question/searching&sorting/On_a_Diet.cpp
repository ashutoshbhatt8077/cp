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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> temp(n);
        for(auto &it:temp)cin>>it;
        ll prev_index=0;
        ll curr_window_size=1;
        ll curr_calorie=0;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(i-prev_index+1>m)
            {
                if(vis[prev_index])
                curr_calorie-=temp[prev_index];
                prev_index++;
            }
           
            if(curr_calorie+temp[i]>k)
            {
                cout<<"No"<<endl;
            }
            else
            {
                vis[i]=true;
                curr_calorie+=temp[i];
                cout<<"Yes"<<endl;
            }
        }
        
    }

    return 0;
}