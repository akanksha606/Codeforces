//Supercentral point(c++)
#include <bits/stdc++.h>
#include<string.h>
typedef long long int ll;
#define COOL std::ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
#define maxv(v) max_element(v.begin(), v.end())
#define minv(v) min_element(v.begin(), v.end())
#define GCD(m, n) __gcd(m, n)
#define LCM(m, n) m *(n / GCD(m, n))
#define inputarr(a, n) for (int i = 0; i < n; i++)cin >> a[i]
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (ll i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)
#define vec vector<ll>
#define v_pair vector<pair<ll, ll>>
#define display(x) for (auto &a : x)cout << a << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug_(x) cout << x << " ";
#define debug__(x, y) cout << x << " " << y << endl;
using namespace std;
int main() 
{ 
     COOL;
     int n,c=0,x[256],y[256],r,l,d,u;
     cin>>n;
     rep(i,n){
         cin>>x[i]>>y[i];
     }
     repA(i,0,n){
         r=0;
         l=0;
         d=0;
         u=0;
         repA(j,0,n){
             r=r||(x[i]>x[j] && y[i]==y[j]);
             l=l||(x[i]<x[j] && y[i]==y[j]);
             d=d||(x[i]==x[j] && y[i]<y[j]);
             u=u||(x[i]==x[j] &&y[i]>y[j]);
             
             
         }
         if(r&l&d&u)
             c++;
     }
     debug(c);
        
}
