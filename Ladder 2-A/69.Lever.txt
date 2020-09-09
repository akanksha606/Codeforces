//Lever(c++)
#include <bits/stdc++.h>
using namespace std;
int main(){
long long i,c=0;
	string s;
	cin>>s;
	for(i=0;s[i]!='^';i++){
}
	for(int j=0;j<s.size();j++)
		if(s[j]!='=')
			c=c+((i-j)*(s[j]-'0'));
	if(c>0)
		cout<<"left";
	else if(c<0)
		cout<<"right";
	else
		cout<<"balance";
    return 0;
}
