#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n = s.length();
if(n<=2) cout<<s<<endl;
else if(n<=10) cout<<s<<endl;
else{
cout<<s[0]<<to_string(n - 2)<<s[n-1]<<endl;
}
}
}