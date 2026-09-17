
#include <bits/stdc++.h>
using namespace std;
string reverse(string t)
{
    string temp="";
    for(int i=t.size()-1;i>=0;i--)
    temp+=t[i];
    return temp;
}
int main() {
    string s;
    cin>>s;
    map<char,int> hash;
    for(auto it:s)hash[it]++;
    long long cnt=0;
    string c="";
    string te="";
    for(auto &it:hash){
        if(it.second%2==1){
        cnt++;
        te+=it.first;
        it.second--;
    }
    for(int i=0;i<it.second/2;i++)
    {
        c+=it.first;
    }
}
    if(cnt>1)
    cout<<"NO SOLUTION"<<endl;
    else
    {
        cout<<c<<te<<reverse(c)<<endl;
    }
}