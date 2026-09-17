#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,a,b;
        cin>>n;
        long long ans=0;
        while(n%10!=n)
        {
            n/=10;
            ans+=9;
        }
        ans+=n;
        cout<<ans<<endl;
    }
}