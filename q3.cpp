#include <iostream>
#include <string>
using namespace std;

string* splitSentence(string sentence, string* words, int& size) {
    size = 0;
    for (char c : sentence) {
        if (c == ' ') {
            size++;
        }
    }
    size++;
    words = new string[size];
    int wordIndex = 0;
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            words[wordIndex] = word;
            word = "";
            wordIndex++;
        }
        else {
            word += c;
        }
    }
    words[wordIndex] = word;
    return words;
}

string multi(string word)
{
    string word2 = word;
    word.append(word2);
    return word;
}

int main() {
    string sentence = "hello world it's me!";
    string* words{};
    int size;

    words = splitSentence(sentence, words, size);

    cout << "the words in the string: " << endl;
    for (int i = 0; i < size; i++) {
        cout << words[i] << endl;
    }
    cout << "now twice: " << endl;
    for (int i = 0; i < size; i++) {
        cout << multi(words[i]) << endl;
    }

    delete[] words;

    return 0;
}