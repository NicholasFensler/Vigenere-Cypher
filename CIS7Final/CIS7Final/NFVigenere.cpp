#include <iostream>
#include <string>
using namespace std;

//constructors
string generateKey(string str, string key);
string encrypt(string str, string key);
string decrypt(string cipher_text, string key);

int main()
{
    //local variables
    char answer = 'n';
    int choice = 0;
    string text, key, keyword, cipher;

    //welcome text
    for (int i = 0; i < 75; i++)
        cout << "-";
    cout << "\nHello, welcome to my final project assignment the Vigenere cypher case\n";
    for (int i = 0; i < 75; i++)
        cout << "-";
    cout << "\n\n";

    //main loop
    do {

        //input
        do {
            cout << "Would you like to Encrypt or Decrypt your text?" << "\nPress 1 to Encrypt and 2 to Decrypt:\t";
            cin >> choice;
        } while (choice != 1 && choice != 2);
        cin.ignore();

        cout << "Please enter the string you would like to encrypt/decrypt in all CAPS:\t";
        getline(cin, text);
        cout << "Please enter the keyword you would like to use in all CAPS:\t";
        getline(cin, keyword);

        key = generateKey(text, keyword);

        if (choice == 1) {
            cipher = encrypt(text, key);
            cout << "Your encrypted text is:\t" << cipher << "\n\n";
        }
        else if (choice == 2) {
            cout << "Your decrypted/original text is:\t" << decrypt(text, key) << "\n\n";
        }

        cout << "Would you like to continue using the program?\nEnter y to continue or any other letter to quit\n";
        cin >> answer;
        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    return 0;
}//end of main

//
// FUNCTIONS
//

//key generation
string generateKey(string str, string key)
{
    int x = str.size();

    for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}//end of keyGeneration

string encrypt(string str, string key)
{
    //local variables
    string cipherTxt;

    for (int i = 0; i < str.size(); i++)
    {
        // converting range 0-25
        char x = (str[i] + key[i]) % 26;

        // convert into ASCII
        x += 'A';

        cipherTxt.push_back(x);
    }
    return cipherTxt;
}//end of encrypt

string decrypt(string str, string key)
{
    //local variables
    string origin;

    for (int i = 0; i < str.size(); i++)
    {
        // converting range 0-25
        char x = (str[i] - key[i] + 26) % 26;

        // convert into alphabet
        x += 'A';
        origin.push_back(x);
    }
    return origin;
}//end of decrypt