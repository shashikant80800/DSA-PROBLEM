#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>(n-i+1)){
                cout<<'*';
            }
            else{
                cout<<j+1;
            }
        }
        for(int j=1;j<=n;j++){
            if(j<i){
                cout<<'*';
            }
            else{
                cout<<n-j+1;
            }
        }
        cout<<endl;
    }
  
}


