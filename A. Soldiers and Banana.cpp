#include <bits/stdc++.h>
using namespace std;
int main(){
int k,n,w;
cin>>k>>n>>w;
int totalCost = (w*k*(w+1))/2;
if(totalCost>n) cout<<totalCost-n<<endl;
else cout<<0<<endl;
}