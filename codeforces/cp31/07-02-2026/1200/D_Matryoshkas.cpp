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
        ll n,x;
        cin>>n;
        map<ll,ll> temp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            temp[x]++;
        }
        ll ans=0;
        while(temp.size()!=0)
        {
            auto it=temp.begin();
            ll num=it->first;
            while(true)
            {
                if(temp.find(num)!=temp.end())
                {
                    temp[num]--;
                    if(temp[num]==0)
                    {
                        temp.erase(num);
                    }
                }
                else 
                {
                    break;
                }
                num++;
            }
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}