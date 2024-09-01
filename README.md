# Affine Cipher Decoder

This project implements an Affine Cipher decoder for the English alphabet, which includes 26 letters and the space character. The program allows the user to input a ciphered message and cipher keys to generate the original plaintext using the Affine Cipher algorithm.

## Features

- **Custom Alphabet**: The decryption process is based on the English alphabet with a space character.
- **Interactive Console Application**: The program runs in the console and interacts with the user, accepting input for decipher keys and text to decode.
- **Affine Cipher Algorithm**: Implements the Affine Cipher decryption formula `D(y) = a^-1 * (y - b) mod m`, where:
  - `y` is the numerical value of a character in the ciphered text.
  - `a^-1` is the modular inverse of the key `a` under modulo `m`.
  - `b` is the second user-defined key.
  - `m` is the size of the alphabet (27 in this case).

## Usage

1. When you run the program, it will display the alphabet used for deciphering.
2. You will be prompted to enter two decipher keys, \(a\) and \(b\). Ensure that \(a\) is coprime with the alphabet size (27) so that a modular inverse exists for a valid deciphering process.
3. Input the ciphered text you wish to decode.
4. The program will display the deciphered (original) text.
5. You can choose to either exit the program or try again with different inputs.

### Example

```plaintext
Deciphering Alphabet: " ABCDEFGHIJKLMNOPQRSTUVWXYZ" (English alphabet including the space character)

Please enter your deciphering keys:
A: 5
B: 7

Enter the text you'd like to decipher: QEGPEL XGJAPGESLRU

Deciphered Text (Inside Quotations): "BE READY FOR EXAMS"

[1] Exit
[2] Try Again
```
