#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    vector<string> words;
    string word;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
    }

    // Push the last word if not empty
    if (!word.empty()) {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i > 0) {
            cout << " ";
        }
    }

    return 0;
}
