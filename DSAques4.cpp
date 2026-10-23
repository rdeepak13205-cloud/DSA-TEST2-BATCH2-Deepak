//find the first unique letter
#include <iostream>
using namespace std;
int main(){
    string s = "leetcode";
for(int i = 0; i < s.length(); i++){
        int count = 0;
for(int j = 0; j < s.length(); j++)        {
            if(s[i] == s[j]){
                count++;
            }
        }
        if(count == 1){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
// Time Complexity: O(n^2)