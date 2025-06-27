#include <iostream>
using namespace std;


char upper_case[] = { 'Z', 'Y', 'X', 'W', 'V', 'U',
				   'T', 'S', 'R', 'Q', 'P', 'O',
				   'N', 'M', 'L', 'K', 'J', 'I',
				   'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A' };

char lower_case[] = { 'z', 'y', 'x', 'w', 'v', 'u',
				   't', 's', 'r', 'q', 'p', 'o',
				   'n', 'm', 'l', 'k', 'j', 'i',
				   'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };


string atbash(string message)
{
	int len = message.size();
	string cipher;
	int ascii_char;
	for (int i = 0; i < len; i++)
	{

		ascii_char = message[i];
		if (ascii_char >= 'A' && ascii_char <= 'Z')
			cipher = cipher + upper_case[ascii_char - 65];
		else
			cipher = cipher + lower_case[ascii_char - 97];

	}

	return cipher;
}

