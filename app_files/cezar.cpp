#include <string>
#include <iostream>
#include <vector>
using namespace std;

string encrypt_caezar(string in, int key)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<char> word(in.begin(), in.end());
    for (int i = 0; i < (int)in.length(); i++)
    {
        for (int letter = 0; letter < (int)alphabet.length(); letter++)
        {
            if (word[i] == alphabet[letter])
            {
                word[i] = alphabet[(letter + key) % 26];
                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}

string decrypt_caezar(string in, int key)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<char> word(in.begin(), in.end());
    for (int i = 0; i < (int)in.length(); i++)
    {
        for (int letter = 0; letter < (int)alphabet.length(); letter++)
        {
            if (word[i] == alphabet[letter])
            {
                word[i] = alphabet[(letter - key + 26) % 26];
                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}