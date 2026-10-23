//The missing seat number
#include <iostream>
using namespace std;
int main(){
    int nums[] = {3, 0, 1};
    int n = 3;
    int sum = 0;
    for(int i = 0; i <= n; i++){

        sum = sum + i;

    }
for(int i = 0; i < n; i++){

        sum = sum - nums[i];

    }
   cout << sum;
   
  return 0;
}
// Time Complexity: O(n)