#include <iostream>
#include <string>

using namespace std;

constexpr char english_alphabet[28] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
constexpr int alphabet_size = sizeof(english_alphabet) - 1;

namespace
{
    int find_numerical_representation(char character)
    {
        for (int i = 0; i < alphabet_size; ++i)
        {
            if (english_alphabet[i] == character)
            {
                return i;
            }
        }

        return 0; // Default to space if character is not found.
    }

    char find_corresponding_character(int index)
    {
        return english_alphabet[index];
    }
}

int main()
{
    while (true)
    {
        cout << "Deciphering Alphabet: \"";

        for (char c : english_alphabet)
        {
            cout << c;
        }

        cout << "\" (English alphabet including the space character)";

        int a = 0, b = 0;

        cout << "\n\nPlease enter your deciphering keys:\nA: ";
        cin >> a;
        cout << "B: ";
        cin >> b;

        // Find the modular inverse of a
        for (int i = 0; i < alphabet_size; ++i)
        {
            if (a * i % alphabet_size == 1)
            {
                a = i;
                break;
            }
        }

        cout << "\nEnter the text you'd like to decipher: ";

        cin.ignore();

        string input;
        getline(cin, input);

        cout << "\nDeciphered Text (Inside Quotations): \"";

        // Loop over each character in the input
        for (char i : input)
        {
            int numerical_representation = find_numerical_representation(i);
            int deciphered_index = a * (numerical_representation - b + alphabet_size) % alphabet_size;
            cout << find_corresponding_character(deciphered_index);
        }

        cout << "\"";

        int prompt = -1;
        cout << "\n\n[1] Exit\n[2] Try Again\n\n";
        cin >> prompt;

        if (prompt == 2)
        {
	        system("CLS"); // Clear Terminal
	        continue;
        }

        return 0;
    }
}