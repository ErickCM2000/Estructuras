#include <list>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int computeHashCode(string word, int tableSize) {
    int hash = 0;
    for(char character: word) {
        hash += (int)character;// % tableSize;
    }    
    return hash % tableSize;
}

int main(int argc, char const *argv[]) {
    
    int tableSize;
    cin >> tableSize;


    string words[tableSize];
    vector<string> hashTable [tableSize];

    for(int i = 0; i < tableSize; ++i) {
      getline(cin, words[i]);
    }

    cout << "\n\n\nPrinting words\n\n\n" << endl;
    for(string word: words) {
      int hashCode = computeHashCode(word, tableSize);
      
      cout << word << " hashcode is " << hashCode << endl;
      //cout << "Word: " << word << " -- Hash code: " << hashCode << endl;
      hashTable[hashCode].push_back(word);
    }

    for(int i = 0; i < tableSize; i++) {
        for(int j = 0; j < hashTable[i].size(); j++) {
          cout << "[" << i << "] <- " << hashTable[i][j] << endl;
        }    
    }

    return 0;
}
