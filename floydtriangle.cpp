#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows you want";
    cin>>n;

    int r=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<r<<" ";
            r++;
        }
        cout<<endl;

    }

}

