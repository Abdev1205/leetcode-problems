class Solution {
public:

    static bool compare(pair<int,int> a, pair<int,int> b){
        return a.second>b.second;
    }

    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> v;
        for(int i=0; i<score.size(); i++){
            pair<int,int> p;
            p.first=i;
            p.second=score[i];
            v.push_back(p);
        }
        sort(v.begin(),v.end(),compare);
        vector<string> ans(score.size()); 
        for(int i=0; i<v.size(); i++){

            // cout<<v[i].first<<" : "<<v[i].second<<endl;
            if(i==0){
                ans[v[i].first]="Gold Medal";
            }
            else if(i==1){
                ans[v[i].first]="Silver Medal";
            }
            else if(i==2){
                ans[v[i].first]="Bronze Medal";
            }
            else{
                ans[v[i].first]=std::to_string(i + 1);
            }
        }
        return ans;

    }
};