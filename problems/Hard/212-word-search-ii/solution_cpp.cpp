/*
logo

212. Word Search II

Description

Hints

Submissions

Discuss

Solution

      

[C++] Trie Soln with backtracking - July 2022 - NO TLE

[C++] Trie Soln with backtracking - July 2022 - NO TLE

33

VIEWS

0

Created at: 3 days ago

spiyush0212

spiyush0212

 812
*/
class Trie {

private:

    struct Node {

    private:

    public:

        char ch;

        bool isEnd;

        unordered_map<char, Node*> children;

        

        Node(char ch) {

            this->ch = ch;

            this->isEnd = false;

        }

    };

    

    Node* createNode(char ch) {

        return new Node(ch);

    }

        

    Node *root = new Node('*');

    

public:

    void insert(string &word) {

        Node *cur = root;

        for (char ch : word) {

            if (!cur->children[ch]) 

                cur->children[ch] = createNode(ch);

            cur = cur->children[ch];

        }

        cur->isEnd = true;

    }

    

    void allCommonWordsStartingFrom(vector<vector<char>> &board, int i, int j, vector<string> &res) {

        string s = "";

        return solve(board, i, j, res, s, root);

    }

    

    void solve(vector<vector<char>> &board, int i, int j, vector<string> &res, string &s, Node *cur) {

        if (cur && cur->isEnd) {

            res.push_back(s);

            cur->isEnd = false;

        }

        

        int m = board.size();

        int n = board[0].size();

                

        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] == '-' || !cur || !cur->children[board[i][j]])

            return;

        

        char ch = board[i][j];

        board[i][j] = '-';

        s.push_back(ch);

        

        solve(board, i - 1, j, res, s, cur->children[ch]);

        solve(board, i, j + 1, res, s, cur->children[ch]);

        solve(board, i + 1, j, res, s, cur->children[ch]);

        solve(board, i, j - 1, res, s, cur->children[ch]);

        

        s.pop_back();

        board[i][j] = ch;

    }

};

class Solution {

private:

    Trie t;

    

public:

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {                

        for (string word : words)

            t.insert(word);

        

        vector<string> res;

        for (int i = 0; i < board.size(); i++)

            for (int j = 0; j < board[0].size(); j++)

                t.allCommonWordsStartingFrom(board, i, j, res);

        return res;

        

    }

}; 
        

