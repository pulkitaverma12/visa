// prices = [7,1,5,3,6,4] o/p = 5 (buy on day 2(price = 1) and sell on day 5
// (price = 6 ),profit  = 6-1 = 5
#include<iostream>
using namespace std;
int maxprofit(int price[],int n){
    int max_profit = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int profit = price[j] - price[i];
            max_profit = max(max_profit,profit);
        }
    }
}
int main(){
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(price[0]);
    cout<<"the maximum profit is "<<maxprofit(price,n)<<endl;
    return 0;
}