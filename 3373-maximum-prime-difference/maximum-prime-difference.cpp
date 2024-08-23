class Solution {
public:
    
    bool isPrime(int num){
        if(num<=1){
            return false;
        }
        if(num==2 || num==3){
            return true;
        }
        if(num%2==0 || num%3==0){
            return false;
        }

        for(int i=5; i*i<=num; i+=6){
            if(num%i==0 || num%(i+2)==0){
                return false;
            }
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> primes;

        for(int i=0; i<nums.size(); i++){
            if(isPrime(nums[i])){
                primes.push_back(i);
            }
        }

        return abs(primes[0]-primes.back());
    }
};