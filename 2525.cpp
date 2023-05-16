#include <iostream>
using namespace std;

void printTime(int h, int m, int t){
    int k;
    m+=t;
    k=m/60;
    m=m%60;
    h+=k;
    if(h>=24) h-=24;

    cout<<h<<" "<<m;
}

int main(){
    int h,m,t;
    cin>>h>> m;
    cin>>t;
    printTime(h,m,t);
    return 0;
}