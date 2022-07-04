#include <iostream>
#include <string>

using namespace std;

string letterShift(string sentence){
  string output = "";
  char alphabet[27] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  for(int i = 0; i < sentence.length(); i++){
    sentence[i] = tolower(sentence[i]);
      for(int x = 1; x < 27; x++){
        if((sentence[i] == alphabet[x]) && sentence[i] != 'z'){
          output += alphabet[x + 1];
        }
        else if(sentence[i] == 'z'){
            x = 26;
            output += 'a';
        }
        else if(!isalpha(sentence[i]))
          output += sentence[i];
      }
  }
  return output;
}

int main() {
  string sent;
  cout << "Please input a sentence" << endl;
  getline(cin, sent);
  cout << letterShift(sent) << endl;
}