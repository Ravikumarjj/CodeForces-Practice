#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=1;
int maxi=INT_MIN;
for(int i =1;i<s.length();i++){
if(s[i-1]==s[i]){
count++;
}
else{
maxi=max(count,maxi);
count=1;
}
}
maxi = max(count,maxi);
if(maxi>=7) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}