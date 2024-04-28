class Solution {
public:

    static bool compare(pair<string,int> a,pair<string,int>b){
        return a.second > b.second;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> v;
        for(int i=0; i<names.size(); i++){
            pair<string,int> p;
            p.first=names[i];
            p.second=heights[i];
            v.push_back(p);
        }
        std::sort(v.begin(),v.end(),compare);
        vector<string> ans;
        for(int i=0; i<v.size(); i++){
            cout<<v[i].second<<" ";
            ans.push_back(v[i].first);
        }
        cout<<endl;
        return ans;
        
    }
};