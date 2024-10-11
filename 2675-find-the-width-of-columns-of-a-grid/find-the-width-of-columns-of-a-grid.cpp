class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int c=0; c<grid[0].size(); c++){
            int maxy = 0;
            for(int r=0; r<grid.size(); r++){
                string s = to_string(grid[r][c]);
                int len = s.size();
                cout<<"Str : "<<s<<"  len "<<len<<endl;
                maxy = max(maxy,len); 
            }
            cout<<"For col "<<c<<" maxy is "<<maxy<<endl; 
            ans.push_back(maxy);
            maxy=0;
            cout<<"-------------"<<endl;
        }
        return ans;
    }
};