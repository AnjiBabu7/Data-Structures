#include<iostream>
#include<vector>
using namespace std;
int mising_number(vector <int>& nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    int x=nums.size();
    int k=(x*(x+1))/2;
    return (k-sum);
}

int main(){
    vector <int> nums;
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(1);
    cout<<mising_number(nums);


return 0;
}