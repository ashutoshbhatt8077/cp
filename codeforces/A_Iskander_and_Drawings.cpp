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
        string s;
        cin>>s;
        ll cnt=0;
        ll mxcnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                cnt=0;
            }
            else
            {
                cnt++;
            }
            mxcnt=max(mxcnt,cnt);
        }
        cout<<((mxcnt+1)/2)<<endl;
    }

    return 0;
}