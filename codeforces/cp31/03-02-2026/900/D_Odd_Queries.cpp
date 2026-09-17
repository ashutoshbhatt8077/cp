#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,q;
        cin>>n>>q;
        vector<long long> temp(n),post(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>temp[i];
            post[i+1]=post[i]+temp[i];
        }
        for(int i=0;i<q;i++)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            if((post[n]-post[r]+post[l-1]+(r-l+1)*k)%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
    }
}