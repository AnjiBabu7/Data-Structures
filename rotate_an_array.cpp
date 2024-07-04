#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    
    k = k % n;
    if (k == 0) return; 
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[(i + k) % n] = nums[i];
    }
    nums = arr;
}

int main() {
    vector<int> nums = {-1, -100, 3, 99};
    rotate(nums, 2);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
