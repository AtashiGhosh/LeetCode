class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int>have_to_visit;
        have_to_visit.push(0);
        
        while(!have_to_visit.empty()){
            int curr = have_to_visit.front();
            have_to_visit.pop();
            visited.insert(curr);
            
            for(int k:rooms[curr])
                if(visited.find(k) == visited.end())
                    have_to_visit.push(k);
        }
        return visited.size() == rooms.size();
    }
};