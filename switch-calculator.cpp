#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    char c;
    cout<<"Enter an Operator sign(+,-,*,/):";
    cin>>c;
    cout<<"Enter two number:";
    cin>>a>>b;
    switch(c){
        case '+':
            cout<<a<<c<<b<<"="<<a+b;
            break;
        case '-':
            cout<<a<<c<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<c<<b<<"="<<a*b;
            break;
        case '/':
            cout<<a<<c<<b<<"="<<a/b;
            break;
        default:
            cout<<"Invalid operator";
            break;
    }
}
