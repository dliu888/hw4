#include <iostream>
#include <fstream>
#include <string>
#include <Bits.h>
#include <vector>
using namespace std;

int main() {

    fstream file;
    string word, t, q, filename;

    //filename of the file
    filename = "2damoon.txt";
    //opening file
    file.open(filename.c_str());

    //extracting words from file
    while (file >> word)
    {
        //removes all punctuation from text
        for (int i = 0, len = word.size(); i < len; i++)
        {
            if (ispunct(word[i]))
            {
                word.erase(i--, 1);
                len = word.size();
            }
        }

        //create a vector to store word data: length, 1st value ascii, # vowels specific to the word
        vector<string> wordData;
       
        /*
        fstream in(fileName);
        if(!in.isOpen()){
        cout << " Cannot Open" << endl;
        }

       
        //Variable for total Rows
        int rows;
        int columns
        for(int i = 0; i < rows; i++){
            for(int j = 0 < j < columns; j++){
            if(in.eof()){
            cout << " End of file " << endl;
            return;
            }
         }

       
       
       
        */
        string tmp;
        in >> tmp;
        wordData.push_back(tmp);
        wordData.push_back("New Word");
        wordData.push_back(word.size());
        worddata.push_back(word[0]);

        //worddata.insert(word.size(),word.begin, 0);

        //display text
        //cout << word << endl;
    }
    return 0;

}
