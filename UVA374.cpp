#include <bits/stdc++.h>
#define ll long long
using namespace std;


//ll m;

ll modularexpo(ll a, ll b,ll c)
{
if(b==0)return 1%c;
if(b%2==0)
{
ll div = modularexpo(a,b/2,c);
return ((div%c)*(div%c))%c;
}
else return ((a%c)*modularexpo(a,b-1,c)%c)%c;
}
 
int main()
{
ll p,n,m;
while(cin>>n>>p>>m)
{
cout<<modularexpo(n,p,m)<<endl;
}                              

}
