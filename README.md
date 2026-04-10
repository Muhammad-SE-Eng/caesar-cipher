# Caesar Cipher in C++

A simple Caesar Cipher program written in C++ with no external libraries. It supports both encryption and decryption of text using a shift value.

## What is Caesar Cipher?

Caesar Cipher is one of the oldest encryption techniques. It works by shifting each letter in the text by a fixed number of positions in the alphabet. For example, with a shift of 3, 'A' becomes 'D', 'B' becomes 'E', and so on.

## Features

- Encrypt any text using a shift value
- Decrypt any text using the same shift value
- Handles both uppercase and lowercase letters
- Non-letter characters (spaces, numbers, punctuation) are kept as is
- No external libraries used, pure C++

## How to Compile and Run

Make sure you have a C++ compiler installed (g++ recommended).

**Compile:**
```bash
g++ caesar.cpp -o caesar
```

**Run:**
```bash
./caesar
```

## Usage

1. Run the program
2. Choose 1 to Encrypt or 2 to Decrypt
3. Enter the text
4. Enter a shift value between 0 and 25

## Example
Caesar Cipher

Encrypt
Decrypt
Choose: 1
Enter text: Hello World
Enter shift (0-25): 3
Encrypted: Khoor Zruog


To decrypt it back:
Caesar Cipher

Encrypt
Decrypt
Choose: 2
Enter text: Khoor Zruog
Enter shift (0-25): 3
Decrypted: Hello World


## File Structure
caesar-cipher/
├── caesar.cpp
└── README.md

## License

This project is open source and free to use.
