#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue < int,vector<int>,greater<int> > Q;
    cout<<Q.top()<<endl;
    Q.push(212);
    Q.push(32);
    Q.push(43);

    cout<<Q.top()<<endl;
    Q.pop();
    cout<<Q.top()<<endl;
    return 0;

}

