#include<iostream>
using namespace std;
bool subsequence(string s1,string s2){
    int j=0;
    for(int i=0;(i<s1.length())&&(j<s2.length());i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
return (j==s2.length());
}
int main(){
string s1,s2;
cin>>s1>>s2;
cout<<subsequence(s1,s2);
return 0;
}