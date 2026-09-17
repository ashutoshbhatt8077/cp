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
        vector<ll> temp(n);
        for(int i=0;i<n;i++)
        cin>>temp[i];
        
        ll q;
        cin>>q;
        while(q>0)
        {
            q--;
            ll l,k;
            cin>>l>>k;
            l--;
            ll left=l,right=n-1;
            while(left<=right)
            {
                ll mid=(left+right)/2;
                if((temp[mid]&k)<k)
                right=mid-1;
                else
                left=mid+1;
            }
            if(left<l+1)
            cout<<-1<<" ";
            else
           cout<<left<<" ";
        }
        cout<<endl;
    }

    return 0;
}