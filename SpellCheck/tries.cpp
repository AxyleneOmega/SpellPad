#include "tries.h"

Trie::Trie(){
    root = new TrieNode();
}

void Trie::insertWord(string word){
    TrieNode* currNode = root;
    for(char c: word){
        if (currNode->children[c - 'a']==NULL) {
            currNode->children[c - 'a'] = new TrieNode();
        }
        currNode = currNode->children[c - 'a'];
    }
    currNode->terminating = true;
}

bool Trie::searchWord(string word){
    TrieNode* currNode = root;
    for(char c: word){
        if( currNode->children[c - 'a'] != NULL) {
            currNode = currNode->children[c - 'a'];
        }else{
            return false;
        }
    }
    return currNode->terminating;
}

bool Trie::deleteWord(string word){
    TrieNode* currNode = root;
    for(char c: word){
        if( currNode->children[c - 'a'] != NULL) {
            currNode = currNode->children[c - 'a'];
        }else{
            return false;
        }
    }
    currNode->terminating = false;
    return true;
}

bool Trie::updateWord(string oldWord, string newWord){

    bool ret = deleteWord(oldWord);
    if(ret)
        this->insertWord(newWord);

    return ret;
}



















