// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>
using namespace std;



int main()
{
	titl();

	int choose, key;

	string text;
	cout << "Choose the number of chipher: ";
	cin >> choose;
	
	ofstream file("text.txt");
	/*
	while (getline(file, text))
	{
		cout << text << endl;
	}*/
	cout << "Enter text, which you would like to encrypt/decrypt: ";
	cin.ignore(); // очищает остатки после cin >> choose
	getline(cin, text);

	file << text;
	file.close();
	switch (choose)
	{
	case 1:
		cout << "Encrypted text: " << encrypt_binary(text) << endl;
		cout << "Decrypted text: " << decrypt_binary(text) << endl;
		break;
	case 2:
		cout << "Enter a key:";
		cin >> key;
		cout << "Encrypted text: " << encrypt_caezar(text, key) << endl;
		cout << "Decrypted text: " << decrypt_caezar(text, key) << endl;
		break;
	case 3:
		reading_file(); //skitala 
		break;
	case 4:
		affin_shift_main(text);
		break;
	case 5:
		cout << "Result:" << atbash(text) << endl;
		break;
	case 6:
		XOR(text);
		break;
	case 7:
		des_main(text);
		break;
	case 8:
		Cipher_3des(text);
		break;
	case 9:
		RSA_cipher(text);
		break;
	default:
		cout << "Choose the correct case!! \n\n\n\n";
		main();
		break;
	}

	system("pause");
}