#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n,a,c=0;
 cin>>n;
 for(int i=1;i<n;i++)
 {
    cin>>a;
    c+=a;
 }
 cout<<(((n)*(n+1))/2)-c<<endl;
}