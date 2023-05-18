#include <iostream>
#include <algorithm>
using namespace  std;

void printPrize(int a, int b, int c){
    int p;
    if((a==b)&&(b==c)&&(a==c)) p=10000+1000*a;
    else if((a!=b)&&(b!=c)&&(a!=c)){
        p=100*max({a,b,c});
    }else {
        if((a==b)||(a==c)) p=1000+100*a;
        else p=1000+100*b;
    }
    cout<<p;

}

int main(){
    int a,b,c;
    cin>>a>> b>> c;
    printPrize(a,b,c);
    return 0;
}