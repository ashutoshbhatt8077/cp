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
        string s;
        cin>>s;
        bool f=true;
        while(s.find("01")!=string::npos||s.find("10")!=string::npos)
        {
            f=!f;
            if(s.find("01")!=string::npos)
            s=s.substr(0,s.find("01"))+s.substr(s.find("01")+2,s.size()-s.find("01")-2);
            else
            s=s.substr(0,s.find("10"))+s.substr(s.find("10")+2,s.size()-s.find("10")-2);
        }
        if(f)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
}