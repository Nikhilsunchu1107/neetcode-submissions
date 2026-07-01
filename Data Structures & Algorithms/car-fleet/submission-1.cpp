class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> p;
        for(int i = 0; i < speed.size(); i++)
            p.push_back({position[i], speed[i]});

        
        sort(p.rbegin(), p.rend());

        stack<double> st;
        for(auto &a: p) {
            double time  = ((double)(target - a.first) / a.second);
            if(st.empty() || time > st.top()) {
                st.push(time);
            }
        }

        return st.size();
    }
};
