#include<iostream>

using namespace std;

int soma1(int N){
    if(N<=1)
    return N;
    N += (soma1(N-1));    
    return N + soma1(N-1);
}

int main(){
    int N;
    cout<<"Digite um numero inteiro: ";
    cin>>N;
    cout<<soma1(N)<<endl;
}




