#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int letters[26] = {0};
        for(auto c:s)
            ++letters[c-'a'];
        for(auto c:t){
            if(--letters[c-'a']<0) return false;
        }
        return true;
    }
};
