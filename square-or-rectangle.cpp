#include<bits/stdc++.h>
using namespace std;
bool square(int c,int d){
    if(c==d){
        return true;
    }
    return false;
}
int main(){
    int l,b;
    cout<<"Enter the length and breadth=";
    cin>>l>>b;
    int ans=square(l,b);
    if(ans){
        cout<<"It is a square";
    }
    else{
        cout<<"It is a rectangle";
    }
}
