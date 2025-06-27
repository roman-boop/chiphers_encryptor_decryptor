#include <iostream>
using namespace std;
void titl();
string encrypt_caezar(string in, int key);
string decrypt_caezar(string in, int key);
string decrypt_binary(string word);
string encrypt_binary(string word);
void reading_file();
int affin_shift_main(string text);
int des_main(string text);
string atbash(string message);
int RSA_cipher(string text);
void XOR(string msg);
int Cipher_3des(string msg);