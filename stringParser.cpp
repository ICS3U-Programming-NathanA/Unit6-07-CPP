// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Date: Dec 17, 2022
// This program splits sentences into separate words

#include <iostream>
#include <list>
#include <sstream>
#include <string>

// Function that accepts a sentence as a string and
// returns a list of the words in the sentence
std::list<std::string> parse_sentence(const std::string sentence) {
    // Split the sentence into a list of words
    std::list<std::string> words;
    std::stringstream ss(sentence);
    std::string word;
    // while loop used to split a sentence stored in
    // a stringstream into a list of words
    while (std::getline(ss, word, ' ')) {
        words.push_back(word);
    }

    // Return the list of words
    return words;
}

int main() {
    try {
        // Ask the user to enter a sentence
        std::cout << "Enter a sentence: ";
        std::string sentence;
        std::getline(std::cin, sentence);

        // Call the parse_sentence()
        std::list<std::string> words = parse_sentence(sentence);

        // Print each word in the list returned by the
        // parse_sentence() function, one per line
        for (const std::string word : words) {
            std::cout << word << std::endl;
        }
    } catch (const std::exception error) {
        // If an error occurs, print an error message
        std::cout << "Enter a valid input";
    }
}
