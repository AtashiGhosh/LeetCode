class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalBeam = 0, prevCount = 0, count = 0;
        for(string s: bank){
            count = 0;
            for(int i = 0; i < s.size(); i++)
                if(s[i] == '1') 
                    count++;
            if(count){
                totalBeam += prevCount * count; 
                prevCount = count;
            }
        }
        return totalBeam;
    }
};

