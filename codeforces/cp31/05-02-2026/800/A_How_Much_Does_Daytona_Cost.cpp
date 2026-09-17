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
        int n,k;
        cin>>n>>k;
        vector<int> temp(n);
        bool f=true;
        for(auto &it:temp)cin>>it;
        for(auto it:temp)if(it==k){
            f=false;
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }


    return 0;
}