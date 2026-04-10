#include <iostream>
#include <string>
using namespace std;
string encrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (c >= 'A' && c <= 'Z')
            result += (char)((c - 'A' + shift) % 26 + 'A');
        else if (c >= 'a' && c <= 'z')
            result += (char)((c - 'a' + shift) % 26 + 'a');
        else
            result += c;
    }
    return result;
}
string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift % 26);
}
int main() {
    string text;
    int shift, choice;
    cout << "Caesar Cipher" << endl;
    cout << "1. Encrypt" << endl;
    cout << "2. Decrypt" << endl;
    cout << "Choose: ";
    cin >> choice;
    cin.ignore();
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter shift (0-25): ";
    cin >> shift;
    if (choice == 1)
        cout << "Encrypted: " << encrypt(text, shift) << endl;
    else if (choice == 2)
        cout << "Decrypted: " << decrypt(text, shift) << endl;
    else
        cout << "Invalid choice." << endl;
    return 0;
}