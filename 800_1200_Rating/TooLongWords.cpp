#include <iostream>
using namespace std;

class Solution {
public:
    string findWayLong(const string& word) {
        if (word.size() <= 10) 
            return word;
        return string(1, word.front()) + 
               to_string(word.size() - 2) + 
               string(1, word.back());
    }
};

int main() {

    Solution sol;
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        string str;
        cin >> str;
        cout << sol.findWayLong(str) << "\n";
    }
}
