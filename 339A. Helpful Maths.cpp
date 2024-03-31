#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
vector<int> a;
for(int i =0;i<s.length();i++){
if(s[i]!='+')a.push_back(s[i]);
}
sort(a.begin(),a.end());
int j=0;
for(int i=0;i<s.length();i++){
if(s[i]!='+')s[i]=a[j++];
}
cout<<s<<endl;
}