/**
 * @file common_words.cpp
 * Implementation of the CommonWords class.
 *
 * @author Zach Widder
 * @date Fall 2014
 */

#include "common_words.h"

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;
using std::feof;

string remove_punct(const string& str)
{
    string ret;
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(ret),
                        [](int c) {return std::ispunct(c);});
    return ret;
}

CommonWords::CommonWords(const vector<string>& filenames)
{
    // initialize all member variables
    init_file_word_maps(filenames);
    init_common();
}

void CommonWords::init_file_word_maps(const vector<string>& filenames)
{
    // make the length of file_word_maps the same as the length of filenames
    file_word_maps.resize(filenames.size());

    // go through all files
    for (size_t i = 0; i < filenames.size(); i++) {
        // get the corresponding vector of words that represents the current
        // file
        vector<string> words = file_to_vector(filenames[i]);
        for (std::vector<string>::iterator iter = words.begin(); iter != words.end(); iter++) {
            file_word_maps[i][*iter] = file_word_maps[i][*iter] + 1;
        }
    }
}

void CommonWords::init_common()
{
    for (std::vector<map<string, unsigned int>>::iterator iter = file_word_maps.begin(); iter != file_word_maps.end(); iter++) {
        for (std::map<string, unsigned int>::iterator it = (*iter).begin(); it != (*iter).end(); it++) {
            map<string, unsigned int>::iterator i = common.find(it->first);
            if (i == common.end()) {
                common[it->first] = 1;
            } else {
                common[it->first] = common[it->first] + 1;
            }
        }
    }
}

/**
 * @param n The number of times to word has to appear.
 * @return A vector of strings. The vector contains all words that appear
 * in each file >= n times.
 */
vector<string> CommonWords::get_common_words(unsigned int n) const
{
    vector<string> out;
    for (std::pair<string, unsigned int> pair : common) {
        unsigned int size = file_word_maps.size();
        if (pair.second == size) {
            int val = 1;
            for (unsigned int i = 0; i < file_word_maps.size(); i++) {
                auto a = file_word_maps[i].at(pair.first);
                if (a < n) {
                    val = 0;
                    break;
                }
            }
            if (val) {
                std::string s = pair.first;
                out.push_back(s);
            }
        }
    }
    return out;
}

/**
 * Takes a filename and transforms it to a vector of all words in that file.
 * @param filename The name of the file that will fill the vector
 */
vector<string> CommonWords::file_to_vector(const string& filename) const
{
    ifstream words(filename);
    vector<string> out;

    if (words.is_open()) {
        std::istream_iterator<string> word_iter(words);
        while (!words.eof()) {
            out.push_back(remove_punct(*word_iter));
            ++word_iter;
        }
    }
    return out;
}
