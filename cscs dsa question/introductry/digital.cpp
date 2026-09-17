
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long t, c;
    cin >> t;
    while (t--)
    {
        ll n, prev = 0,j=9,in=1,cnt=0;
        cin >> n;
        while(prev+j*in<n)
        {
            cnt+=j;
            prev+=j*in;
            j*=10;
            in++;
        }
        ll num=cnt+(n-prev)/in;
        ll rem=(n-prev)%in;
        if(rem==0)
        cout<<num%10<<endl;
        else
        {
            num++;
            for(int i=0;i<in-rem;i++)
            num/=10;
            cout<<num%10<<endl;
        }
    }
}