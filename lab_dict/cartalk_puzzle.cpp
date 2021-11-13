/**
 * @file cartalk_puzzle.cpp
 * Holds the function which solves a CarTalk puzzler.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include <fstream>

#include "cartalk_puzzle.h"

using namespace std;

/**
 * Solves the CarTalk puzzler described here:
 * http://www.cartalk.com/content/wordplay-anyone.
 * @return A vector of (string, string, string) tuples
 * Returns an empty vector if no solutions are found.
 * @param d The PronounceDict to be used to solve the puzzle.
 * @param word_list_fname The filename of the word list to be used.
 */
vector<std::tuple<std::string, std::string, std::string>> cartalk_puzzle(PronounceDict d,
                                    const string& word_list_fname)
{
    vector<std::tuple<std::string, std::string, std::string>> ret;

    ifstream file(word_list_fname);
    string s;
    if (file.is_open()) {
        while (getline(file, s)) {
            if (s.size() == 5) {
                if (d.homophones(s, s.substr(1))) {
                    if (d.homophones(s, s[0] + s.substr(2))) {
                        ret.push_back(tuple<string, string, string>(s, s.substr(1), s[0] + s.substr(2)));
                    }
                }
            }
        }
    }
    return ret;
}
