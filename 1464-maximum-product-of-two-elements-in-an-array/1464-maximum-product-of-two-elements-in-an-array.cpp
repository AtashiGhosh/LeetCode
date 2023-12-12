class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=0, q=0;
        for(const int& number:nums){
            if(number > p){
                q = p;
                p = number;
            }
            else if(number > q){
                q = number;
            }
        }
        return(p-1) * (q-1);
    }
};
 