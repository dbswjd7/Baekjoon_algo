#include <iostream>
using namespace std;

int main(){
    int X, N, a, b;
    int s=0;
    cin>>X;
    cin>>N;
    while(N--){
        cin>>a>> b;
        int k=a*b;
        s+=k;
    }
    if(X==s) cout<<"Yes";
    else cout<<"No";
    return 0;
}