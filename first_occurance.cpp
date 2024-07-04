#include <iostream>
using namespace std;

int first_occ(int *arr, int end, int st, int x) {
    while (st <= end) {
        int m = st + (end - st) / 2;
        if (x > arr[m]) {
            st = m + 1;
        } else if (x < arr[m]) {
            end = m - 1;
        } else {
            if (m == 0 || arr[m -1] != arr[m]) {
                return m;
            } else {
                end=m-1;
            }
        }
    }
    return -1;
}
int last_occ(int *arr, int end, int st, int x) {
    while (st <= end) {
        int m = st + (end - st) / 2;
        if (x > arr[m]) {
            st = m + 1;
        } else if (x < arr[m]) {
            end = m - 1;
        } else {
            if (m == 9 || arr[m +1] != arr[m]) {
                return m;
            } else {
                st=m+1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 1, 2,2,2,2,3,3,3,4};
    int k = first_occ(arr, 9, 0, 6);
    int j= last_occ(arr, 9, 0, 6);
    if(k!=-1&&j!=1)
    cout<<(j-k+1);
    else{
        cout<<0;
    }
    return 0;
}
