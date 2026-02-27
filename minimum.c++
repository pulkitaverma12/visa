#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.length();
        int operations = 0;
        for (int i = 0; i <= n - k; i++) {
            if (s[i] == '0') {
                operations++;
                // flip next k characters
                for (int j = i; j < i + k; j++) {
                    s[j] = (s[j] == '0') ? '1' : '0';
                }
            }
        }
        // check if all are 1
        for (char c : s) {
            if (c == '0') return -1;
        }
        return operations;
    }
};
int main(){
    Solution s;
    string a = "0000";
    int k = 2;
    int result = s.minOperations(a, k);
    cout << result << endl;
    return 0;
}