class Solution {
    public:
        int countPrimes(int n) {
            if(n<=2) return 0;
            int count = 1;
            vector<bool> flag(n,false);
            for(int i=3;i<n;i+=2)
                if(!flag[i]){
                    ++count;
                    for(int j=2*i;j<n;j+=i)
                        flag[j]= true;
                }
            return count;
        }
};
