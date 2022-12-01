#include <iostream>
#include <string>
#include <cctype>
#include "Assign3_Functions.h"

using namespace std;

int main()
{
    char user_input = ' ';
    


    while (user_input != 'Q') {
        user_input = toupper(menu_options());
        cout << endl;

        switch (user_input) {
        case 'P':
            string user_string;
            string string_copy;
            cout << "Enter a string to check if it is a palindrome: ";
            cin.ignore();
            getline(cin, user_string);
            cout << endl;
            cout << endl;

            string_copy = user_string;


            user_string.erase(remove(user_string.begin(), user_string.end(), ' '), user_string.end()); //stripping a string of spaces, making all lower case

            if (isPalindrome(user_string, 0, user_string.length())) {
                cout << string_copy << " is a palindrome!" << endl;
            }
            else {
                cout << string_copy << " is NOT a palindrome!" << endl;
            }
            cout << endl;
            continue;
        }
    }



}