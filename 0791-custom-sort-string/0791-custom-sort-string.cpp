class Solution {
public:
    string customSortString(string order, string str) 
    {
        sort(str.begin(),str.end(),[&](const char &a,const char &b){
            return order.find(a)<order.find(b);
        });
        return str;
    }
};