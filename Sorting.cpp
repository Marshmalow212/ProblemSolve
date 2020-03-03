#include <bits/stdc++.h>
#define ssm stringstream
#define vepr vector<pair<int,int>>
#define pr pair<int,int>
#define f1(n) for(int i=0;i<n;i++)
#define ft first
#define sd second
using namespace std;
int main(){
vepr vp;
pr p;
vp.push_back({1,5});
vp.push_back({2,9});
vp.push_back({3,12});
vp.push_back({4,2});
vp.push_back({5,4});

int l = vp.size();

f1(l)
cout<<vp[i].ft<<'\t'<<vp[i].sd<<endl;

}