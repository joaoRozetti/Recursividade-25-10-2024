#include<iostream>

using namespace std;

int i;

int somaPar(int n){
    if(n==0)
        return 0;
    if(n%2==0)
        return(somaPar-2);
    if(n%1==0)
        return(somaPar-1);
}

int main(){
    int n;
    cout<<"Escreva um numero inteiro: ";
    cin>>n;
    cout<<somaPar<<endl;
}