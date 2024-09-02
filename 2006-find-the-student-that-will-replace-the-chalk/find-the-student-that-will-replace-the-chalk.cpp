class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long tChalk = 0;
        for(auto c :chalk){
            tChalk+=c;
        }

        // now we will find how much round we can use this chalk 
        k = k%tChalk;

        // now we have left over chalk that student is going to use 
        for(int i=0; i<chalk.size(); i++){
            if(k<chalk[i]){
                return i;
            }
            k-= chalk[i];
        }

        return -1;


        // this brute approach 69 / 72 testcases passed
        // if(chalk.size()==1){
        //     return 0;
        // }
        // queue<pair<int,int>> q;
        // for(int i=0; i<chalk.size(); i++){
        //     q.push({chalk[i],i});
        // }
        // while(k>=0){
        //     pair<int,int> front = q.front();
        //     if(k<front.first){
        //         return front.second;
        //     }
        //     k = k-front.first;;
        //     q.pop();
        //     q.push(front);
        // }

        // return -1;
    }
};