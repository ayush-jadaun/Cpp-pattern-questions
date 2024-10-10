#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter array size: ";

    cin>>n;

    char arr[n];

    cout<<"Enter array char: ";

    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
               cout<<j+1;
            }
            else{
                cout<<arr[j];
                
            }

        }
        cout<<endl;
    }
}