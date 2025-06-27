#include <iostream>
#include <vector>
#include <string>
using namespace std;

string encrypt_binary(string word)
{
    for (int i = 0; word[i] != 0; i++) {
        word[i]++;
        if (word[i] > 122) {
            word[i] = word[i] - 26;
        }
    }
    return word;
}

string decrypt_binary(string word)
{
    for (int i = 0; word[i] != 0; i++) {
        word[i]--;
        if (word[i] > 122) {
            word[i] = word[i] - 26;
        }
    }
    return word;
}