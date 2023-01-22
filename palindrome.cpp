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
        cout << "A palavra � um pal�ndrome." << endl;
    } else {
        cout << "A palavra n�o � um pal�ndrome." << endl;
    }
    return 0;
}
