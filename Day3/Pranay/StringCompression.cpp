#include <vector>
#include <iostream>

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int index = 0;

        for (int i = 0; i < chars.size(); i++) {
            if (i == chars.size() - 1 || chars[i] != chars[i + 1]) {
                chars[index++] = chars[i];
                
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[index++] = c;
                    }
                }
                
                count = 1;
            } else {
                count++;
            }
        }

        return index;
    }
};
