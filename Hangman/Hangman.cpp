#include <bits/stdc++.h>
using namespace std;

const int MAX_BAD_GUESSES = 7;
const string path = "words.txt";

string CHOOSEWORD(string path);
void RENDERGAME (string guessedword, string ans);
char PLAYER_GUESS();
bool IS_CONTAIN(char x, string str);
void update_guessedWord(string &guessedWord,string ans,char guess);
string LOWERCASE(string x);


int main(){
    srand(time(0));
    string ans = CHOOSEWORD(path);
    if(ans.size() == 0)
    {
        cout<<"reading file failed"<<endl;
        return 1;
    }
    string guessedWord ="";
    string badGuesses ="";
    for(int i = 0; i < ans.size(); i++){
        guessedWord += "-";
    }
    do{
        RENDERGAME(guessedWord, badGuesses);
        char guess = PLAYER_GUESS();

        if(IS_CONTAIN(guess, ans)){
            update_guessedWord(guessedWord, ans, guess);
        }
        else{
            badGuesses += guess;
        }
    }
    while(badGuesses.size() < MAX_BAD_GUESSES && guessedWord != ans);
    if(badGuesses.size() < MAX_BAD_GUESSES){
        cout<<"YOU WIN!!!";
    }
    else cout<<"You lost, the correct word is "<<ans;
    return 0;

}


string CHOOSEWORD(string path){
    vector<string> words;
    ifstream inFile(path);
    if(inFile)
    {
        while(!inFile.eof())
        {
            string x;
            inFile>>x;
            words.push_back(x);
        }
        inFile.close();

        if(words.size() >= 1)
        {
            int index = rand() % words.size();
            return LOWERCASE(words[index]);
        }
        else return "";
    }
    return "";
}

char PLAYER_GUESS(){
    cout<<"Enter a character that you think is in the word"<<endl;
    char x;
    cin>>x;
    return tolower(x);
}

bool IS_CONTAIN(char x, string str){
    return (find(str.begin(), str.end(),x) != str.end());
}

void update_guessedWord(string &guessedWord,string ans,char guess){
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == guess){
            guessedWord[i] = guess;
        }
    }
    return;
}
const string FIGURE[] = {
        "   -------------    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |           |    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          /     \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          / \\  \n"
        "   |     \n"
        " -----   \n"
    };
void RENDERGAME (string guessedword, string badguesses){
    int BAD_GUESS_COUNT = badguesses.size();
    cout<<FIGURE[BAD_GUESS_COUNT]<<endl;
    cout<<"WORD: "<<guessedword<<endl;
    if(BAD_GUESS_COUNT > 0){
        cout<<"You have made  "<<BAD_GUESS_COUNT<<" wrong ";
        cout<<(BAD_GUESS_COUNT == 1 ? "guess" : "guesses");
        cout<<": "<<badguesses<<endl;
    }
}
string LOWERCASE(string x){
    for(int i = 0; i < x.size(); i++){
        x[i] = tolower(x[i]);
    }
    return x;
}

