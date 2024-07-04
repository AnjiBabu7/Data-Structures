#include<iostream>
using namespace std;
bool palindrome(string s){
    int n=0,k=s.length();
    for(int i=0;i<k/2;i++){
        if(s[i]!=s[k-i-1]){
            n++;
        }
    }
    if(n==0){
        return true;
    }
    return false;
}

int main(){
string s;
cin>>s;
cout<<palindrome(s);
return 0;
}