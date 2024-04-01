#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n];
for(int i =0;i<n;i++){
for(int j=0;j<2;j++){
cin>>a[i][j];
}
}
int maxi=INT_MIN;
int diff=0;
for(int i =0;i<n;i++){
diff-=a[i][0];
diff+=a[i][1];
maxi=max(diff,maxi);
}
cout<<maxi<<endl;
}