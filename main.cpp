#include "hangman.h"
#include <fstream>
using namespace std;

    string badchars;
    int guesses;
    string twojeslowo;
    int lenght=0;
    string target;


int main()
{

    char play;
    cout<<"Czy chcesz zagrac w gre slowna? <t/n>: ";
    cin>>play;
    play = tolower(play);
    while (play != 't' && play != 'n')
    {
        cout<<"Niepoprawny znak. Wpisz t/n: ";
        cin>>play;
        play = tolower(play);
    }
    while (play == 't')
    {
    guesses=6;
    badchars="";
    string word;
 //---------------------------------------------
 //---Losowanie hasla z pliku-------------------

    srand(time(0));
    int linia = rand()%29+1;
    fstream plik;
    plik.open("filmy.txt", ios::in);
    if (plik.good()== false)
    {
        cout<<"Plik nie istnieje!";
        exit(0);
    }
    for(int i=0; i<linia; i++)
    {
       getline(plik, word);
    }
    plik.close();
//---------------------------------------------

    target = word;
    lenght = target.length();

    twojeslowo=target;
    for (int i=0; i<target.length(); i++)
    {
        if (twojeslowo[i] != ' ') twojeslowo[i]='-';
    }

    while (guesses>0 && twojeslowo != target)
    {
        wyswietl();
        char letter;
        cin>>letter;
        letter = toupper(letter);
        if (badchars.find(letter) != string::npos || twojeslowo.find(letter) != string::npos)
        {
            cout<<"Ta litera juz byla. Sprobuj innej.";
            Sleep(1500);
            continue;
        }

        int loc = target.find(letter);
        if (loc == string::npos)
        {
            cout<<"Nie ma takiej litery.";
            Sleep(1500);
            --guesses;
            badchars+=letter;                        //dodaje z³e litery
        }
        else
        {
            cout<<"Poprawna litera!!\n";
            Sleep(1000);
            twojeslowo[loc] = letter;
            loc = target.find(letter, loc+1);       //sprawdza czy litera nie pojawia siê ponownie w innym miejscu
            while (loc != string::npos)
            {
                twojeslowo[loc] = letter;
                loc = target.find(letter, loc+1);
            }
        }
    }
    if (guesses>0)
        {
            cout<<"Udalo sie. Gratulacje!\n";
            wyswietl();
        }
    else  wyswietl();

    cout<<"\nCzy chcesz zagrac jeszcze raz? <t/n> ";

    cin>>play;
    play = tolower(play);
    }
    return 0;
}
