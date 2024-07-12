class TriNode {
public:
    char data;
    TriNode* children[26];
    bool isTerminator;

    TriNode(char data) {
        this->data = data;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        this->isTerminator = false;
    }
};

void addWords(TriNode* root, string words) {
    if (words.size() == 0) {
        root->isTerminator = true;
        return;
    }

    char ch = words[0];
    int index = ch - 'a';
    TriNode* child;

    if (root->children[index] != NULL) {
        // children present
        child = root->children[index];
    } else {
        // children not found then we have to add that 
        child = new TriNode(ch);
        root->children[index] = child;
    }

    // recursion sab samyhal lega
    addWords(child, words.substr(1));
}

void storeSuggestion(TriNode* curr, vector<string>& s, string& prefix) {
    if (curr->isTerminator) {
        s.push_back(prefix);
    }

    // a to z tak choice de do
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (s.size() == 3) return;  // stop when we have 3 suggestions
        int index = ch - 'a';
        TriNode* next = curr->children[index];

        if (next != NULL) {
            // means child exists
            prefix.push_back(ch);
            storeSuggestion(next, s, prefix);
            prefix.pop_back();
        }
    }
}

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        // Approach 1
        // Using Tries to solve the suggestion problem

        // Sort the products to ensure lexicographical order
        sort(products.begin(), products.end());

        TriNode* root = new TriNode('-');

        // add the words in trie;
        for (int i = 0; i < products.size(); i++) {
            addWords(root, products[i]);
        }

        TriNode* prev = root;
        vector<vector<string>> ans;
        string prefix = "";

        for (int i = 0; i < searchWord.size(); i++) {
            char ch = searchWord[i];
            int index = ch - 'a';
            TriNode* curr = prev ? prev->children[index] : NULL;

            if (curr == NULL) {
                // If no suggestions, push an empty vector for the remaining characters
                while (i < searchWord.size()) {
                    ans.push_back({});
                    i++;
                }
                break; // No need to continue further
            } else {
                vector<string> suggestion;
                prefix.push_back(ch);
                storeSuggestion(curr, suggestion, prefix);
                // get the first three suggestions
                if (suggestion.size() > 3) {
                    suggestion.resize(3);
                }
                ans.push_back(suggestion);
                prev = curr;
            }
        }
        return ans;
    }
};