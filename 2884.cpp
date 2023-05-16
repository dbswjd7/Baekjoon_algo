#include <iostream>
using namespace std;

void printTime(int h, int m){
    if(m>=45){
        m-=45;
    }else{
        m+=15;
        h-=1;
    }
    if(h<0) h=23;
    cout<<h<<" "<<m;
}

int main(){
    int h,m;
    cin >>h >>m;
    printTime(h,m);
    return 0;
}