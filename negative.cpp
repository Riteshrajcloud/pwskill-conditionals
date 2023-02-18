#include<bits/stdc++.h>
using namespace std;
bool check(int c){
    if(c<0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int ans=check(n);
    if(ans){
        cout<<"The number is negative and skipped";
    }
    else{
        cout<<"Possitive number";
    }
}
