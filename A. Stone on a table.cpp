#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n<=1){
cout<<0<<endl;
return 0;
}
string s;
cin>>s;
int count=0;
for(int i=1;i<n;i++){
if(s[i-1]==s[i])count++;
}
cout<<count<<endl;
}