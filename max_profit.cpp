#include<iostream>
#include<vector>

using namespace std;
int maxProfit(vector<int>& prices) {
    int l=prices[0];
    int h=0;
    int p=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<l){
            l=prices[i];
            h=l;
        }
        else if(prices[i]>h&&l<prices[i]){
            h=prices[i];
            if(p<h-l){
                p=h-l;
            }
        }
    }
    return p;
        
    }

int main(){
    vector<int> prices={3,2,6,5,0,3};
    cout<<maxProfit(prices);

return 0;
}