#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        n--;
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int cnt=0;
        while(x.size()<m)
        {
            x+=x;
            cnt++;
        }
        if(x.find(s)!=string::npos)
        {
            cout<<cnt<<endl;
        }
        else if((x+x).find(s)!=string::npos )
        {
            cout<<cnt+1<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }
    }
}