#include<iostream>
using namespace std;
int main(){
    int fact,i,n=20;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}