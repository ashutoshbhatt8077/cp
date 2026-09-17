
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        s.insert(c);
    }
    cout<<s.size()<<endl;
}