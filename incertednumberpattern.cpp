#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows you want: ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-1+i;j++){
            cout<<j;
        }
     cout<<endl;

    }
}