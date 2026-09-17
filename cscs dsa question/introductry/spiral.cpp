#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin>>n;
    while(n)
    {
        n--;
        long long a,b;
        cin>>a>>b;
        if(a>b)
        {
            if(a%2==1)
            {
                cout<<(a-1)*(a-1)+b<<endl;
            }
            else
            {
                cout<<(a-1)*(a-1)+a+a-b<<endl;
            }
        }
        else{
            if(b%2==0)
            {
                cout<<(b-1)*(b-1)+a<<endl;
            }
            else
            {
                cout<<(b-1)*(b-1)-a+b+b<<endl;
            }
        }
    }
    return 0;
