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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x,sum=0;
        vector<int> temp(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp[i];
        }
        if(temp[n-1]==temp[0])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            cout<<temp[n-1]<<" "<<temp[0]<<" ";
            for(int i=n-2;i>0;i--)cout<<temp[i]<<" ";

            cout<<endl;
        }
    }

    return 0;
}