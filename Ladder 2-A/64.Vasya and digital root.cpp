//Vasya and digital root(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    long long int k,d;
    cin>>k>>d;
    if(d==0&&k>1)
    cout<<"No solution";
    else{
    cout<<d;
    k=k-1;
    while(k--)
    cout<<0;
}}
