#include <iostream>
#include <vector>
using namespace std;

struct TrieNode {
    bool terminating = false;
    TrieNode* children[26] = {NULL};
};

class Trie {
    TrieNode* root;
public:
    Trie();

    void insertWord(string word);
    bool searchWord(string word);
    bool deleteWord(string word);
    bool updateWord(string oldWord, string newWord);

    //vector<string, int> getDictionary();
};

