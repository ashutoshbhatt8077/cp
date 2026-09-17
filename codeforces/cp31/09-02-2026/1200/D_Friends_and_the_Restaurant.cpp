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
        vector<ll> temp(n),remp(n),diff(n);
        for(auto &it:temp)cin>>it;
        for(auto &it:remp)cin>>it;
        for(int i=0;i<n;i++)
        {
            diff[i]=remp[i]-temp[i];
        }
        sort(diff.begin(),diff.end());
        int j=0;
        int cnt=0;
        for(int i=n-1;i>j;i--)
        {
            while((j<i-1)&&(diff[j]+diff[i]<0))
            j++;
            if(diff[j]+diff[i]>=0)
            cnt++;
            j++;
        }
        cout<<cnt<<endl;


    }

    return 0;
}