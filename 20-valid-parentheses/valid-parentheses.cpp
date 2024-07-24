class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            // if opening braces 
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                // if closing braces are there 
                if(!st.empty()){
                    char topCh = st.top();
                    if(ch==')' && topCh =='(' ){
                        st.pop();
                    }
                    else if(ch==']' && topCh =='['){
                        st.pop();
                    }
                    else if(ch=='}' && topCh=='{'){
                        st.pop();
                    }
                    else {
                        return false;
                    }
                    
                }
                else {
                    return false;
                }
            }

        }
        
        if(st.empty()){
            return true;
        }
        else{
           return false; 
        } 
    }
};