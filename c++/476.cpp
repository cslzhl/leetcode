#include <iostream>
#include <cassert>
using namespace std;
class Solution {
public:
    int findComplement(int num) {
        int res = 1;
        while(res<num){
            res = (res<<1) + 1;
        }
        return res - num;
    }

};
int main(){
    Solution x;
    cout<<x.findComplement(5)<<endl;
    assert(x.findComplement(5)==2);
    cout<<__func__<<endl;
}
