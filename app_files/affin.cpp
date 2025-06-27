#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int keycode(char s)
{
    for (int i = 0; i < alphabet.length(); i++) {
        if (s == alphabet[i]) return i;
    }
    return 0;
}

void affin_Encode(string txt, int addKey, int multKey)
{
    for (int i = 0; i < txt.length(); i++) {
        cout << alphabet[(keycode(txt[i]) * multKey + addKey) % alphabet.length()];
    }
    cout << endl;
}

void affin_Decode(string txt, int addKey, int invMultKey)
{
    for (int i = 0; i < txt.length(); i++) {
        cout << alphabet[((keycode(txt[i]) - addKey + alphabet.length()) * invMultKey) % alphabet.length()];
    }
    cout << endl;
}

int affin_shift_main(string txt) {
    int addKey, multKey, invMultKey;
    

    for (auto& c : txt) c = toupper(c);
    cout << "\nenter additive key = ";
    cin >> addKey;

    if (addKey % alphabet.length() == 0)
    {
        cout << "nothing to shifrate";
        return 0;
    }
    if (addKey < 0) addKey = addKey % alphabet.length();
    

    bool a = true;
    while (a) {
        cout << "enter multiplicative key = ";
        cin >> multKey;
        if (multKey < 0 || multKey > alphabet.length()) {
            multKey = multKey % alphabet.length();
        }
        for (int i = 0; i < alphabet.length(); i++) {
            if (multKey * i % alphabet.length() == 1) {
                invMultKey = i;
                cout << "multiplicative key inversion = " << invMultKey << endl;
                a = false;
                break;
            }
        }
        if (a == true) cout << "no inversion input, try another key" << endl;
    }


    cout << "Encoded text: "; affin_Encode(txt, addKey, multKey);
    cout  << "Decoded text: "; affin_Decode(txt, addKey, multKey);
    
}