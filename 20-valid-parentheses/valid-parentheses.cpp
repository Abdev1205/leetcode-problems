class Solution {
public:
    bool isValid(string s) {
        stack<char> bucket;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];

            if( (ch=='(') || (ch=='{') || (ch=='[') ){
                // add that in bucket
                bucket.push(ch);
            }
            else{
               if(!bucket.empty()){
                    // this is closing bracket so we have to remove its 
                    // corresponding operning bracket
                    char top = bucket.top();
                    if(ch==')' && top=='('){
                        // its match remove that opening bracket
                        bucket.pop();
                    }
                    else if(ch=='}' && top=='{'){
                        // its match remove that opening bracket
                        bucket.pop();
                    }
                    else if(ch==']' && top=='['){
                        // its match remove that opening bracket
                        bucket.pop();
                    }
                    else{
                        return false;
                    }
               }
               else{
                    return false;
               }
            }
        }

        return bucket.size()==0;
    }
};