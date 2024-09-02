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

## Installation

### Installation Using [Visual Studio](https://visualstudio.microsoft.com/downloads/)

1. **Clone the Repository**

   Clone the repository to your local machine using the following command:

   ```bash
   git clone https://github.com/adamt-eng/affine-cipher-decoder
   ```

2. **Open the Project**

   - Navigate to the directory where the repository was cloned.
   - Open the `Affine Cipher Decoder.sln` solution file in Visual Studio.

3. **Build the Project**

   - Once the project is opened in Visual Studio, build the solution by selecting `Build > Build Solution` from the menu or pressing `Ctrl + Shift + B`.

4. **Run the Program**

   - After building the solution, you can run the program by pressing `F5` or selecting `Debug > Start Debugging`.

### Alternative Compilation

If you prefer not to use Visual Studio, you can directly compile the `Program.cpp` file using a standard C++ compiler of your choice.

### Additional Notes

- If there are any missing dependencies or libraries, Visual Studio will prompt you to install them automatically.
- Ensure that your system has the necessary C++ development tools and libraries installed through Visual Studio's installer or your preferred development environment.

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
