#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> &arr){
int s=0;
int e=arr.size()-1;
while(s<=e){
    int m=(s+e)/2;
    if(((m==0)||(arr[m-1]<=arr[m]))&&((m==(arr.size()-1))||(arr[m]>=arr[m+1]))){
        return m;
    }
    else if((m>0)&&(arr[m-1]>arr[m])){
        e=m-1;
    }
    else{
        s=m+1;
    }
}
return -1;
}

int main(){
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(4);
    cout<<peak(arr);

return 0;
}