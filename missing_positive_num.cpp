#include<iostream>
#include<vector>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
    int j=arr.size()-1;
    int n=arr[j]+k;
    vector<int>nums;
    for(int i=1;i<=n;i++){
        nums.push_back(i);
    }
    for(int i=0;i<=j;i++){
        nums.erase(nums.begin()+arr[i]-(i+1));
    }


return nums[k-1];
        
    }

int main(){
vector<int> arr={2,3,4,7,11};
cout<<findKthPositive(arr,5);
return 0;
}