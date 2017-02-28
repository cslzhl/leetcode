#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        int letters[26] = {0};
        char zero[] = {'z','x','c','v','b','n','m'};
        char one[]= {'a','s','d','f','g','h','j','k','l'};
        char two[]= {'q','w','e','r','t','y','u','i','o','p'};
        for(auto c:zero)
            letters[c - 'a'] = 0;
        for(auto c:one)
            letters[c - 'a'] = 1;
        for(auto c:two)
            letters[c - 'a'] = 2;
        for(auto &str:words){
            if(str.empty()) continue;
            int sum = letters[tolower(str[0]) - 'a'];
            for(auto &c:str)
                if(sum != letters[tolower(c) - 'a']){
                    sum = 3;
                    break;
                }
            if(sum<=2) ans.push_back(string(str));
        }
        return ans;
    }
};
int main()
{
    vector<string> words {"Hello","Alaska","Dad","Peace"};
    Solution s;
    vector<string> ans = s.findWords(words);
    for(auto str:ans)
        cout<<str+" ";
}
