#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node * next;
    node(int a)
    {
        val=a;
        next=nullptr;
    }
};
bool steps(node *head)
{
    node* p=head;
    int cnt=0;
    cout<<cnt<<endl;
    while(!p)
    {
        p=p->next;
        cnt++;
    }
    return cnt;
}
bool check(node*p,int a,int t)
{
    if(a>t/2)
    return true;
    int temp=a;
    node * q=p;
    while(t-temp>1)
    {
        q=q->next;
        temp++;
    }
    if(p->val!=q->val)
    return false;
    else
    return check(p->next,a+1,t);
}
int main() {
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    node* p=head;
    node* q=head;
    if(check(head,0,steps(head)))
    cout<<"palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;
    cout<<steps(head)<<endl;
    
}
