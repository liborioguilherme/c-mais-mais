#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string word;
    cout << "Digite uma palavra: ";
    cin >> word;
    if (isPalindrome(word)) {
        cout << "A palavra é um palíndrome." << endl;
    } else {
        cout << "A palavra não é um palíndrome." << endl;
    }
    return 0;
}
