//Parallelepiped(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<4*(sqrt(x*y/z)+sqrt(y*z/x)+sqrt(x*z/y));
    
}