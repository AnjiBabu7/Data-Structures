#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
            else{
                p.push_back(nums[i]);
            }
        }
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if((i%2==0)){
                nums[i]=p[j];
                j++;
            }
            else{
                nums[i]=p[k];
                k++;
            }
        }
        return nums;
        
    }

int main(){

return 0;
}