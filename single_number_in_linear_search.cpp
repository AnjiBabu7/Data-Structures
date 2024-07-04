#include<iostream>
#include<vector>
using namespace std;
int single_number(vector <int> &nums){
    int x=nums[0];
    for(int i=1;i<nums.size();i++){
        x=x^nums[i];
    }
return x;
}

int main(){
vector<int> nums;
nums.push_back(4);
nums.push_back(2);
nums.push_back(1);
nums.push_back(2);
nums.push_back(1);
cout<<single_number(nums);
return 0;
}