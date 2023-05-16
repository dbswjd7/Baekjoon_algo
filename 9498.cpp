#include <iostream>
using namespace std;

void printScore(int sc){
    if(sc>=90){
        cout<<"A";
    }else if(sc>=80) {
        cout << "B";
    }else if(sc>=70){
        cout<<"C";
    }else if(sc>=60){
        cout<<"D";
    }else cout<<"F";
}

int main(){
    int s;
    cin >> s;
    printScore(s);
    return 0;
}