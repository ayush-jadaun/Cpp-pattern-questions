#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter number of rows you want";

cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=(2*n-1);j--){
        if(j<=n-1 || j>=n+1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
}
}