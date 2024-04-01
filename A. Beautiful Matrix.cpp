#include <bits/stdc++.h>
using namespace std;
int main(){
int n =5;
int array[n][n];
for(int i =0;i<n;i++){
for(int j=0;j<n;j++){
cin>>array[i][j];
}
}
for(int i =0;i<n;i++){
for(int j=0;j<n;j++){
if(array[i][j]==1){
cout<<abs(j-2)+abs(i-2)<<endl;
break;
}
}
}
}