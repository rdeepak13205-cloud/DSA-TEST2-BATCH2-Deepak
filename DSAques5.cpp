//the best buy and sell day
#include <iostream>
using namespace std;
int main(){
    int a[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int buy = a[0];
    int profit = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < buy){
            buy = a[i];
        }
        int x = a[i] - buy;
        if(x > profit){
            profit = x;
        }
    }
    cout << profit;
    return 0;
}
// Time Complexity: O(n)