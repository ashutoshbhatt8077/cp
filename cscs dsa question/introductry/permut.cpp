#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    if(n==2||n==3)cout<<"NO SOLUTION"<<endl;
    else
    {for(int i=1;i<=n;i++)if(i%2==0)cout<<i<<" ";
    for(int i=1;i<=n;i++)if(i%2==1)cout<<i<<" ";}
    return 0;
}
