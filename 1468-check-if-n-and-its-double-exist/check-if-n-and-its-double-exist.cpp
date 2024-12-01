class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // brute force
        int len = arr.size();
        // sort(arr.begin(), arr.end(), greater<>());
        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                // if(arr[i]>2*arr[j] && i!=j){
                //     break;
                // }
                // cout<<" arr [i] = "<<arr[i]<<" ->  arr[j] =  "<<arr[j]<<endl;
                if(i!=j && arr[i] == 2*arr[j]){
                    return true;
                }
            }
        }

        return false;
    }
};