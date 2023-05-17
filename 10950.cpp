#include <iostream>
using namespace std;


int main(){
    int n,a,b,i;
    cin>>n;
    i=n;
    int *sum = new int[n];
    while(n--){
        cin>>a>> b;
        sum[n-1]=a+b;
    }
    while(i--){
        cout<<sum[i-1]<<endl;
    }
    return 0;
}