#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
//    do {
//        cin>>a>>b;
//        cout<<a+b;
//    }while(a==0&&b==0);
    while(true){
        cin>>a>>b;
        if(a==0&&b==0) break;
        cout<<a+b<<"\n";
    }
    return 0;
}