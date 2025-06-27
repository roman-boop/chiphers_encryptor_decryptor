#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;


int encrypt(int file_length, char* source_text)
{
    char* ciphertext;
    int symbol_amount;
    int string_amount;
    int colum_amount;
    int index;

    symbol_amount = file_length;
    ciphertext = new char[symbol_amount];
    cout << endl; cout << "Enter a key: ";
    cin >> string_amount;
    colum_amount = ((symbol_amount - 1) / string_amount) + 1; // вычисляем количествово столбцов  

    for (int i = 0; i < symbol_amount; i++) {
        index = string_amount * (i % colum_amount) + (i / colum_amount);
        ciphertext[index] = source_text[i];
    }

    for (int i = 0; i < symbol_amount; i++)
        cout << ciphertext[i];
    cout << endl;

    system("pause");
    return 0;
}

void reading_file()
{
    char *source_text;
    int file_length;

    ifstream fin("text.txt");

    cout << "How many symbols read from file?  " << endl;
    cin >> file_length;
    file_length++;
    source_text = new char[file_length];
    fin.getline(source_text, file_length);

    cout << endl << "Received text: " << endl;
    for (int i = 0; i < file_length; i++) {
        cout << source_text[i];
    }
    cout << endl;
    fin.close();

    encrypt(file_length, source_text);
}
