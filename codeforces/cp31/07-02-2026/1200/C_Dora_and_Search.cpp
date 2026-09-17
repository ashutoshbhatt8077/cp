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
        vector<ll> temp(n);
        for(auto &it:temp)cin>>it;
        int mi=1,ma=n;
        int i=0,j=n-1;
        bool f=false;
        while(i<j)
        {
            if(temp[i]==mi)
            {
                mi++;
                i++;
            }
            else if(temp[i]==ma)
            {
                ma--;
                i++;
            }
            else if(temp[j]==mi)
            {
                mi++;
                j--;
            }
            else if(temp[j]==ma)
            {
                ma--;
                j--;
            }
            else
            {
                f=true;
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
        if(!f)
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}