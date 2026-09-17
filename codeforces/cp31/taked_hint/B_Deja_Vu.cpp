#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,q;
        cin>>n>>q;
        vector<ll> a(n),b(q);
        for(auto &it:a)cin>>it;
        for(auto &it:b)cin>>it;
        ll mi=30;
        for(auto it:b)
        {
            if(mi<=it)
                {
                    continue;
                }
            else{
                mi=it;
            }
            for(auto &iit:a)
            {
                if(iit%(1<<it)==0)
                {
                    iit+=(1<<(it-1));
                }

            }
        }
        for(auto it:a)
        cout<<it<<" ";
        cout<<endl;
        
    }
}