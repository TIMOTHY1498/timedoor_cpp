#include <iostream>
#include <string>
#include <vector>

// array manipulation

int main() {
    // init array (type data = string)
    std::vector<std::string> words = {"hello", "world", "!"};

    // add new content to the array
    words.push_back("hi");
    words.push_back("there");
    words.push_back("!");

    // remove the last element from the array (the stirng "!")
    words.pop_back();

    // replace all content from the array with new content
    words.assign({"new", "content", "for", "the", "array"});

    // remove the first element from the array (the string "new")
    words[0] = "replaced";

    // print the array content
    for (const auto& word : words) {
        std::cout << word << ", ";
    }
    std::cout << std::endl;

    // dynamic memory allocation to remove shit
    words.clear(); // clear the vector to free memory

    // exit 0x00000 (success)
    return 0;
}