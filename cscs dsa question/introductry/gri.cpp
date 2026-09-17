
#include <bits/stdc++.h>
using namespace std;
void solve(long long n,string temp)
{
    if(n==0)
   {
    cout<<temp[0];
    for(int i=1;i<temp.size();i++)
    {
        if(temp[i]==temp[i-1])
        {
            cout<<'0';
        }
        else{
            cout<<'1';
        }
    }
    cout<<endl;
     return ;
    }
    if(n%2==0)
   { solve(n-1,temp+'0');
    solve(n-1,temp+'1');}
    else{
        solve(n-1,temp+'0');
    solve(n-1,temp+'1');
    }
}
int main() {
  long long n;
  cin>>n;
  solve(n,"");
}