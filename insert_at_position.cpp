#include<iostream>
using namespace std;
int insert(int *arr,int s,int e,int x){
    if((x<arr[0])){
        return -1;
    }
    else{
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==x){
            return m+1;
        }
       else if(arr[m]>x){
            if((arr[m-1]<x)&&(x<arr[m])){
                return m;
            }
            else{
                e=m-1;
            }
        }
        
        else{
            s=m+1;
        }
    }
}}

int main(){
int arr[6]={1,1,1,1,1,1};
cout<<insert(arr,0,5,2);
return 0;}