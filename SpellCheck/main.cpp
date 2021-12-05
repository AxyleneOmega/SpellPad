#include "tries.h"

#define underlineOn "\033[4m"
#define underlineOff "\033[0m"
//cat is here cart ball true
int main(){

    Trie oTrie;

    vector<string> words = { "cat", "car", "cart", "ball", "bat", "bats"};
    for(string word: words)
        oTrie.insertWord(word);


    string s = "";
    while(true){
        char c = getchar();
        if(c == '\n'){ // break on enter
            oTrie.searchWord(s) ? cout << s : cout << underlineOn << s << underlineOff;
            cout << c;
            break;
        }
        if(c == ' '){
            oTrie.searchWord(s) ? cout << s : cout << underlineOn << s << underlineOff;
            s = "";
            cout << c;
        }
        else{
            s = s + char(c);
        }
    }

    cout << endl << endl;
    return 0;
}


