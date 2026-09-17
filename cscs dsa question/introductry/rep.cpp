#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 long long n=0,cnt=1;
 string s;
 cin>>s;
 for(int i=1;i<s.size();i++)
 {
    if(s[i]==s[i-1])
    {
        cnt++;
    }
    else
    {
        n=max(cnt,n);
        cnt=1;
    }
 }
 cout<<max(n,cnt)<<endl;
}