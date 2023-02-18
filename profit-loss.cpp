#include<bits/stdc++.h>
using namespace std;
bool check(int c,int s){
    if(c<s){
        return true;
    }
    return false;
}
int main(){
    int cp,sp;
    cout<<"Enter cost price and selling price respectively:";
    cin>>cp>>sp;
    int ans=check(cp,sp);
    if(ans){
        cout<<"Profit="<<(sp-cp);
    }
    else{
        cout<<"Loss="<<(cp-sp);
    }
}
