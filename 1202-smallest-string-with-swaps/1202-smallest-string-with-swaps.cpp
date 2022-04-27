class Solution{
public:
    int find(vector<int>& disjointSet, int index){
    return disjointSet[index] < 0 ? index : disjointSet[index] = find(disjointSet, disjointSet[index]);
}
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs){
        vector<int>disjointSet(s.size(), -1);
        vector<vector<int>>m(s.size());

        for (auto& p: pairs){
            auto i = find(disjointSet, p[0]), j = find(disjointSet, p[1]);
            if (i != j) 
                disjointSet[j] = i;
        }

        for (auto i = 0; i < s.size(); ++i){
            m[find(disjointSet, i)].push_back(i);
        }

        for(auto& unionSet:m){
            string temp = "";
            for(auto& value: unionSet){
                temp += s[value];
            }
            sort(temp.begin(), temp.end());
            for(auto i = 0; i < unionSet.size(); ++i){
                s[unionSet[i]] = temp[i];
            }
        }

        return s;
    }
};