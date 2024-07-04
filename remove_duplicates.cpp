#include<iostream>
#include<vector>
using namespace std;
int remove_duplicates(vector<int>&nums){
    int x=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            x++;
        }
      
    }
    return x;
}
int main(){
vector<int> nums;
nums.push_back(0);
nums.push_back(0);
nums.push_back(1);
nums.push_back(1);
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
nums.push_back(3);
nums.push_back(4);
cout<<remove_duplicates(nums);
return 0;
}