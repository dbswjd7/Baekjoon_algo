#include <iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    s=n;
    while(n--){
        s+=n;
    }
    cout<<s;
    return 0;
}