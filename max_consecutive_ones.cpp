#include<iostream>
#include<vector>
using namespace std;
int max(vector<int> &nums){
    int x=0,y=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            x++;
        }
        else{
            if(x>y){
                y=x;
                x=0;
            }
            else{
                x=0;
            }
        }
    }
    if(x>y){
        y=x;
    }
    return y;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    cout<<max(nums);

return 0;
}