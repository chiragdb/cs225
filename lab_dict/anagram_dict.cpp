/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    ifstream file(filename);
    string s;
    if (file.is_open()) {
      /* Reads a line from `wordsFile` into `word` until the file ends. */
      while (getline(file, s)) {
        string str = s;
        std::sort(str.begin(), str.end());
        dict[str].push_back(s);
      }
    }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
    for (unsigned i = 0; i < words.size(); i++) {
        std::string str = words.at(i);
        std::sort(str.begin(), str.end());
        dict[str].push_back(words.at(i));
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    string temp = word;
    std::sort(temp.begin(), temp.end());
    if (dict.find(temp) == dict.end()) {
        return vector<string>();
    }
    if (dict.at(temp).size() == 1) {
        return vector<string>();
    }
    return dict.at(temp);
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    std::vector<vector<string>> vect;
    for (std::pair<string, std::vector<string>> pair : dict) {
        if (pair.second.size() > 1) {
            vect.push_back(pair.second);
        }
    }
    return vect;
}
