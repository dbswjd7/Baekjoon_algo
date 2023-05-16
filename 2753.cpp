#include <iostream>
using namespace std;

void printYear(int year){
    if(year%4==0){
        if(year%400==0||year%100!=0) cout<<"1";
        else cout<<"0";
    }else cout<<"0";
}

int main(){
    int y;
    cin>>y;
    printYear(y);
    return 0;
}