#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&nums){
    int k=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            if(nums[i-1]<nums[i+1]){
                return false;
            }
            else {
                k++;
            }
        }
    }
    if(k==0||k==1)
    return true;
    else{
        return false;
    }
}

int main(){
vector<int> nums={3,4,5,1,2};
cout<<check(nums);
return 0;
}