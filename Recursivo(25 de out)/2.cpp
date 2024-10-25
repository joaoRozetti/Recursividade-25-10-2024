#include<iostream>

using namespace std;

int numeroCont(int n){
    if(n<1)
        return n;
    return(n%10+numeroCont(n));
}

int main(){
    int n;
    cout<<"Escreva um numero inteiro: ";
    cin>>n;
    cout<<numeroCont(n)<<endl;
    return 0;
    
}