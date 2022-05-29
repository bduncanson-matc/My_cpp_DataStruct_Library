#include <iostream>
#include <vector>
#include <algorithm>
#include "Trie.h"



void print_all(std::vector<std::string> s) {
    std::for_each(s.begin(), s.end(), [](auto n) {std::cout << n << std::endl; });
}





int main()
{
    std::vector<std::string> words = { "abcw", "baz", "foo", "bar", "xtfn", "abcdef" };
    Trie* word_dictionary = new Trie();
    for
    word_dictionary->insert("abcwaz");
    if (!word_dictionary->search("abcw")) {
        std::cout << "False";
    }
        std::cout << "true";

}
