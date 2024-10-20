#include <string>
#include <stack>

class Solution {
public:
    bool evalSubExpr(const string& subExpr, char op) {
        if (op == '!') {
            return subExpr[0] == 'f'; 
        }

        bool result = (subExpr[0] == 't'); 

        bool isAnd = (op == '&');

        for (size_t i = 0; i < subExpr.size(); ++i) {
            if (subExpr[i] == 't' || subExpr[i] == 'f') {
                bool current = (subExpr[i] == 't');
                if (isAnd) {
                    result &= current;
                } else {
                    result |= current; 
                }
            }
        }
        return result;
    }

    bool parseBoolExpr(string exp) {
        stack<int> s; 
        
        for (int i = 0; i < exp.size(); i++) {
            if (exp[i] == '(') {
                s.push(i); 
            } else if (exp[i] == ')') {
                if (!s.empty()) {
                    int start = s.top(); 
                    s.pop();
                    char op = exp[start - 1]; 
                    string currExp = exp.substr(start + 1, i - start - 1); 
                    bool res = evalSubExpr(currExp, op); 
                    exp.replace(start - 1, i - start + 2, res ? "t" : "f");
                    i = start - 1; 
                }
            }
        }

        return (exp == "t");
    }
};
