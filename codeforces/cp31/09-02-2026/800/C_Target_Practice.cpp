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
        char c;
        ll cnt=0;
        vector<vector<ll>> temp(10,vector<ll>(10));
    
        for(int i=1;i<=10;i++)
        for(int j=1;j<=10;j++)
        {
            cin>>c;
            if(c=='X')
            {
                if(i==1||i==10||j==1||j==10)
                cnt+=1;
                else if(i==2||i==9||j==2||j==9)
                cnt+=2;
                else if(i==3||i==8||j==3||j==8)
                cnt+=3;
                else if(i==4||i==7||j==4||j==7)
                cnt+=4;
                else
                cnt+=5;
            }
        }
        cout<<cnt<<endl;
        
    }

    return 0;
}