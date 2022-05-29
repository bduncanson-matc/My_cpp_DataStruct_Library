#include "Trie.h"

void Trie::insert(std::string word) {

    Trie* node = this;
    for (int i = 0; i < word.length(); i++) {
        
        if ( node->children[word[i]-'a'] == nullptr) 
        
            node->children[word[i]-'a'] = new Trie();
        
        
        node = node->children[word[i]-'a'];
    }
    node->isLeaf = true;

}
bool Trie::search(std::string word) {
    if (this == nullptr)
        return false;
    
    Trie* node = this;
    
    for (int i = 0; i < word.length(); i++){
        
        node = node->children[word[i]-'a'];
        
        if (node == nullptr)
            return false;

    }
    
    if(node->isLeaf)
        return false;

}