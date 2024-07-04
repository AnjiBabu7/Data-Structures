#include<iostream>
#include<vector>
using namespace std;

int main(){
int arr[6]={1,2,3,4,5,6};
int x;
cout<<"enter element to search:";
cin>>x;
int k=-1;
int s=0,e=5,m=0;
while(s<=e){
    m=(s+e)/2;
    if(x==arr[m]){
        cout<<"yes";
        k=m;
        break;
    }
    else if(x<arr[m]){
        e=m-1;
    }
    else if(x>arr[m]){
        s=m+1;
    }
}
cout<<k;

return 0;
}