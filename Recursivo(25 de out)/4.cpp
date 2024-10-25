#include<iostream>

using namespace std;

int tribo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n>2){
        return(tribo(n-1)+tribo(n-2)+tribo(n-3));
    }
         
}

int main(){
    int n;
    cout<<"Escreva um numero inteiro: ";
    cin>>n;
    cout<<tribo(n)<<endl;
    return 0;
}
