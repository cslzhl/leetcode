#include <string>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int letters[58] = {0};
        for(auto c:s)
            ++letters[c-'A'];
        int flag = 0;
        int num =0;
        for(auto i:letters)
            if(i>0){
               if(i%2==0) num+= i;
               else {
                   flag = 1;
                   num += i-1;
               }
            }
        return num + flag;
    }
};
