#include <iostream>
using namespace std;

void printMul(int a){
    int i;
    for(i=1; i<=9; i++){
        cout<<a <<" * "<<i<<" = "<<a*i<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    printMul(a);
    return 0;
}