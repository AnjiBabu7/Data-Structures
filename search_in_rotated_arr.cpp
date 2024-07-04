#include<iostream>
using namespace std;
bool search(int* arr,int end,int st,int x){
  bool n=false;

    while(st<end){
      
       int  m=(st+end)/2;
     if(arr[m]==x){
     }
     if(arr[st]<arr[m]){
      if(arr[st]<=x&&x<arr[m]){
        end=m-1;
      }
      else{
        st=m+1;
      }
     }
     else{
      if(arr[m]<x&&x<arr[end]){
        st=m+1;
      }
      else{
        end=m-1;
      }
     }
}
}

int main(){
int arr[6]={100,500,10,20,40,50};
bool n=search(arr,5,0,400);
cout<<n;
return 0;
}