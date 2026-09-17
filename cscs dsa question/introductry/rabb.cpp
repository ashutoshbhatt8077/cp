
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,a,b;
    cin>>n>>a>>b;
    if(a+b>n||(a==0&&b>0)||(b==0&&a>0))
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
        for(int i=n;i>0;i--)
        cout<<i<<" ";
        cout<<endl;
        for(int i=n;i>a+b;i--)
       {
         n--;
         cout<<i<<" ";
       }
        for(int i=0;i<a;i++)
        cout<<n-b-i<<" ";
        for(int i=0;i<b;i++)
        cout<<n-i<<" ";
        cout<<endl;
    }
}
int main() {
  long long n;
  cin>>n;
  while(n)
  {
    n--;
    solve();
  }
}