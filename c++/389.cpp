#include <string>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int letters[26] = {0};
        for(auto &c:s)
            ++letters[c-'a'];
        for(auto &c:t){
            --letters[c-'a'];
            if(letters[c-'a']<0) return c;
        }
        return '\0';
    }
};
