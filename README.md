# chiphers_encryptor_decryptor
A console-based C++ application that implements 9 classic encryption algorithms. The user selects a cipher, enters text (either encrypted or plain), and provides a key if necessary. The program outputs both the encrypted and decrypted versions of the input.


## 📦 Project Structure

- `ConsoleApplication1.cpp` — main file with the cipher selection menu  
- `affin.cpp` — affine cipher module  
- `atbash.cpp` — Atbash cipher module  
- `binary.cpp` — binary representation cipher  
- `cezar.cpp` — Caesar cipher module  
- `des_chifr.cpp` — DES cipher implementation  
- `rsa.cpp` — RSA cipher module  
- `skitala.cpp` — Scytale cipher  
- `xor.cpp` — XOR-based cipher  
- `3des.cpp` — Triple DES implementation  

---

## 🔢 Available Ciphers

### 1. Binary Cipher
- 🔑 **Key:** not required  
- 📄 **Description:** each character is converted to its ASCII binary code.

### 2. Caesar Cipher
- 🔑 **Key:** integer (e.g. `3`)  
- 📄 **Description:** each letter is shifted by a fixed number of positions in the alphabet. A simple symmetric cipher.

### 3. Skitala Cipher
- 🔑 **Key:** not required (the rod size is fixed internally)  
- 📄 **Description:** text is written row by row into a grid and read column by column to encrypt.

### 4. Affine Cipher
- 🔑 **Key:** two integers `a` and `b` (where `a` and 26 must be coprime)  
- 📄 **Description:** encrypts using the formula `E(x) = (a * x + b) mod 26`. Decryption requires the modular inverse of `a`.

### 5. Atbash Cipher
- 🔑 **Key:** not required  
- 📄 **Description:** reverses the alphabet (A ↔ Z, B ↔ Y, etc.). A classical monoalphabetic substitution cipher.

### 6. XOR Cipher
- 🔑 **Key:** any string (e.g. `"key"`)  
- 📄 **Description:** each character is XORed bitwise with the key, repeated cyclically. Simple and fast symmetric encryption.

### 7. DES
- 🔑 **Key:** 8-character string  
- 📄 **Description:** block cipher that uses the Data Encryption Standard (DES). Key is effectively 56 bits long.

### 8. 3DES (Triple DES)
- 🔑 **Key:** 24-character string  
- 📄 **Description:** applies DES three times for stronger encryption. Uses three DES keys concatenated together.

### 9. RSA
- 🔑 **Key:** automatically generated or provided public/private keys  
- 📄 **Description:** asymmetric encryption algorithm based on large prime numbers. Suitable for secure data transmission.

---

## ⚙️ How to Use project

1. Compile the project (`Ctrl + F5` or `Build → Rebuild`)
2. Run `ConsoleApplication1.exe`
3. Choose a cipher by its number (1–9)
4. Enter the text you want to encrypt/decrypt
5. If required, enter a key
6. View both encrypted and decrypted results


---
You can also just run "chiphers.exe" file and use the programm without opening .sln project.

## 🛠️ Requirements

- C++17 or later  
- Windows (uses `windows.h` for console output styling)

---

## 📌 Version

**1.4**

## 🧑‍💻 Author

- Telegram: [@perpetual_god](https://t.me/perpetual_god)  
- GitHub: [roman-boop](https://github.com/roman-boop)
