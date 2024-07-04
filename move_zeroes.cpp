#include<iostream>
#include<vector>
using namespace std;
void movez(vector<int>&nums){
int j=0;
for(int i=0;i<nums.size();i++){
 if(nums[i]==0){
    nums.erase(nums.begin()+i);
    j++;
    i--;
    
 }
}
for(int i=0;i<j;i++){
    nums.push_back(0);
}
}
int main(){
vector<int> nums={1,0,0,4};
movez(nums);

for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
return 0;
}