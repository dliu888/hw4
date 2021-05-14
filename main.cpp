#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


bool isVowel(char ch)
{
  ch = tolower(ch);
  return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

//returns count of vowels in word
int countVowels(string str)
{
  int count = 0;
  for(int i = 0; i<str.length(); i++)
  if(isVowel(str[i])) //checks for vowels
    ++count;
  return count;
}


int main() {

  fstream file;
  string word, t, q, fileName;

  //filename of the file
  fileName = "2damoon.txt";
  //opening file
  file.open(fileName.c_str());
  
  //extracting words from file
  while(file >> word)
  {
    //removes all punctuation from text
    for(int i=0, len = word.size(); i<len; i++)
    {
      if(ispunct(word[i]))
      {
        word.erase(i--,1);
        len = word.size();
      }
    }
    
    //changes all text to lowercase format
    transform(word.begin(), word.end(), word.begin(),
    [](unsigned char c){ return tolower(c); });


    //create a vector to store word data: length, 1st value ascii, # vowels specific to the word
    vector<string> wordData;

    fstream in(fileName);
    if(!in.is_open())
    {
        cout << "Cannot open" << endl;
    }

  

    //variable for total rows
    int rows;
    int columns;
    for(int i = 0; i<rows; i++)
    {
      for(int j = 0; j<columns; j++)
      {
        if(in.eof())
        {
          cout<< "End of file" << endl;
          //return;
        }
    }
    

    //display text
      //string temp;
      int numVowels = countVowels(word);
      in >> word;
      wordData.push_back(word);
      //wordData.push_back("New Word");
      wordData.push_back(word.size());
      wordData.push_back(word[0]);

      //count vowels
      wordData.push_back(numVowels);

      //cout << word << endl;
  }
  return 0;


}
