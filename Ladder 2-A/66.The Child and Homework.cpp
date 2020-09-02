//The Child and Homework(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int a,b,c,d;
    a=s1.size()-2;
    b=s2.size()-2;
    c=s3.size()-2;
    d=s4.size()-2;
    int f=0;
    char ch;
    if((a>=2*b&&a>=2*c&&a>=2*d)||(a<=b/2&&a<=c/2&&a<=d/2)){
        ch='A';
            f++;
    }
    if((b>=2*a&&b>=2*c&&b>=2*d)||(b<=a/2&&b<=c/2&&b<=d/2)){
        ch='B';
        f++;
    }
    if((d>=2*b&&d>=2*c&&d>=2*a)||(d<=b/2&&d<=c/2&&d<=a/2)){
        ch='D';
        f++;
    }
    if((c>=2*b&&c>=2*d&&c>=2*a)||(c<=b/2&&c<=d/2&&c<=a/2)){
        ch='C';
        f++;
    }
    if(f==1)
    cout<<ch;
    else
    cout<<'C';
    }
