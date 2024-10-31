class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>peak;

        for(int i=1; i<m.size()-1; i++){
           int n1 =  m[i-1];
           int n2 = m[i+1];

           if(m[i]>n1 && m[i]>n2){
            peak.push_back(i);
           }
        }

        return peak;
    }
};