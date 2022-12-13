# Vigenere-Cypher
This is a encryption/decryption program that uses the Vigenere method. I wrote this program as my final project in my discrete structures class
Author: Nicholas Fensler

APPROACH:
I wanted to make a fairly simple and user friendly program in which you could pick if you'd like to encrypt or decrypt a message and allow the user to continue if they'd like. I wanted to seperate the processes as if the computer encrypts the message for you but also decrypts it right then and there it seems a little pointless. My main goal was to allow a user to input something they would like to have encrypted and allow another user to simply take the encrypted information with a key and use the decrypt method in order to see what message was sent. 

DIRECTIONS:
This program is mostly self explanatory and describes the necessary inputs when running.
For instance the string inputs for your text and for your keywords MUST be CAPITALIZED.

BOUNDARIES:
No special characters or numbers or anything like that will function. just the capital letters of the 26 letter english alphabet for the text and the keyword will work.

TIPS:
the program will execute it's Encrypting and Decrypting functions seperately. It's suggested to use the Encrypting part of the program first and remember your Keyword so that when you decrypt you'll use the same keyword and the encrypted string it gave you earlier. 

EXAMPLE:
original string/text: HELLOWORLD  (input)
keyword: NICK                     (input)
encryption: UMNVBEQBYL            (output)
then -----
string/text: UMNVBEQBYL           (input)
keyword: NICK                     (input)
decryption: HELLOWORLD            (output)
