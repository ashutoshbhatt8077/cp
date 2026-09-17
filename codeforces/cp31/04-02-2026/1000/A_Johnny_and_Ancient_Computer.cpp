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
        ll a,b;
        cin>>a>>b;
        if((a%b==0)||(b%a==0))
        {
            if(a==b)
            {
                cout<<0<<endl;
            }
            else
            {
                ll p=max(a,b);
                ll q=min(a,b);
                ll qo=p/q;
                ll cntb=0;
                ll cntb1=0;
                while(qo>0)
                {
                    if(qo&1)
                    {
                        cntb1++;
                    }
                    else
                    {
                        cntb++;
                    }
                    qo=qo>>1;
                }
               
                if(cntb1>1)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    cout<<cntb/3+(cntb%3)/2+((cntb%3)%2)<<endl;
                }
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}