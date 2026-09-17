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
        if(n%2==0)
        {
            cout<<"1 2 2 1 2 1 1 2 ";
            for(int i=3;i<=n;i+=2)
            {
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
            }
        }
        else
        {
            cout<<"1 1 2 1 2 3 1 3 2 2 3 3 ";
             for(int i=4;i<=n;i+=2)
            {
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}