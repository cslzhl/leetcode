#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> tmpStack;
        tmpStack.push(0);
        vector<int> ans(findNums.size(),0);
        for(int i=1;i!= nums.size();++i)
        {
            if(nums[tmpStack.top()]>nums[i]) tmpStack.push(i);
            else{
                while(!tmpStack.empty()&&nums[tmpStack.top()]<nums[i]){
                    int tmp = nums[tmpStack.top()];
                    tmpStack.pop();
                    int index = findIndex(findNums,nums,tmp);
                    if(index>-1) ans[index] = i;
                }
                tmpStack.push(i);
            }
        }
        for(auto &i:ans)
            if(i==0) i = -1;
        return ans;

    }
    int findIndex(vector<int>& findNums, vector<int>& nums,int index){
        for(int i=0;i!= findNums.size();++i)
            if(findNums[i]==nums[index]) return i;
        return -1;
        
    }
};
int main(){
    vector<int> findNums {4,1,2};
    vector<int> nums {1,3,4,2};
    Solution s;
    vector<int> res = s.nextGreaterElement(findNums,nums);
    for(auto &i:res)
        cout<<i+" ";
}
