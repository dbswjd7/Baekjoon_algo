#include <iostream>
using namespace  std;

void printQuadrant(int a,int b){
    if(a>0){
        if(b>0) cout<<"1";
        else cout<<"4";
    }else{
        if(b>0) cout<<"2";
        else cout<<"3";
    }
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    printQuadrant(a,b);
    return 0;
}