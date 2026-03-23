#include <iostream>
#include <fstream>

using namespace std;

struct Word {
    string Text;
    string Explanation;
};

void loadData(Word dictionary[], int& n) {
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin >> ws, s);
        dictionary[i].Text = s;
        getline(cin >> ws, s);
        dictionary[i].Explanation = s;
    }
}
void saveData(Word dictionary[], int n) {
    for (int i = 0; i < n; i++) {
        cout << dictionary[i].Text << endl << dictionary[i].Explanation << endl;
    }
}
void Sort(Word[], int);

int main() {
    Word* dictionary = new Word[15000];
    int n;
    loadData(dictionary, n);
    Sort(dictionary, n);

    saveData(dictionary, n);
    delete[] dictionary;
    return 0;
}

