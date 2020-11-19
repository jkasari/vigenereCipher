#include <iostream>
#include <cmath>
#include <ctgmath>
#include <vector>
#include <string>
#include "cipherFunctions.cpp"
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 3) {
    cout << "Error: This program expects exactly two arguments" << endl << endl;
    cout << "  (The distance to shift)" << endl;
    cout << "  (The message to encrypt)" << endl;
    return 1;
  }
  char* messageStr = argv[2];
  if (!isInAlphabetIndex(messageStr)) {
    cout << "The message can only use characters in |ALPHABET_INDEX|" << endl;
    return 1;
  }
  char* keyStr = argv[1];
  if (!isInAlphabetIndex(keyStr)) {
    cout << "The key can only use charatcers in |ALPHABET_INDEX|" << endl;
    return 1;
  }
  decrypt(keyStr, messageStr);
  cout << messageStr << endl;
}