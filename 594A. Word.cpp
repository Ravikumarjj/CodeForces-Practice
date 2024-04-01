#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int upper=0,lower=0;
for(int i =0;i<s.length();i++){
if(s[i]>='A' && s[i]<='Z') upper++;
else lower++;
}
if(upper>lower){
for(int i =0;i<s.length();i++){
    s[i]=towupper(s[i]);
}
}
else {
    for(int i =0;i<s.length();i++){
    s[i]=towlower(s[i]);
}
}
cout<<s<<endl;
}