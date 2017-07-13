#include "hangman.h"
using namespace std;
extern int guesses;
extern int lenght;
extern string badchars;
extern string twojeslowo;
extern string target;


void wyswietl ()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

    cout<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tHANGMAN"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Niepoprawne litery: ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<badchars;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"\tMozesz pomylic sie jeszcze: ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    if(guesses>0) cout<<guesses-1;
    else cout<<guesses;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<" razy"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    if (guesses==6)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       "<<endl;
    cout<<" |       "<<endl;
    cout<<" |       "<<endl;
    cout<<"/ \\ "<<endl;
    }
    else if (guesses==5)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |"<<endl;
    cout<<" |"<<endl;
    cout<<"/ \\ "<<endl;
    }
        else if (guesses==4)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |       | "<<endl;
    cout<<" |"<<endl;
    cout<<"/ \\ "<<endl;
    }
        else if (guesses==3)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |      /| "<<endl;
    cout<<" |"<<endl;
    cout<<"/ \\ "<<endl;
    }
        else if (guesses==2)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |      /|\\ "<<endl;
    cout<<" |"<<endl;
    cout<<"/ \\ "<<endl;
    }
        else if (guesses==1)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |      /|\\ "<<endl;
    cout<<" |      /"<<endl;
    cout<<"/ \\ "<<endl;
    }
        else if (guesses==0)
    {
    cout<<" ---------"<<endl;
    cout<<" |       |"<<endl;
    cout<<" |       O"<<endl;
    cout<<" |      /|\\ "<<endl;
    cout<<" |      / \\ "<<endl;
    cout<<"/ \\ "<<endl<<endl;
    cout<<"KONIEC GRY!!!"<<endl;
    cout<<"\nNiestety, tym razem sie nie udalo. Haslo to: ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout<<target<<endl<<endl;
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout<<"\t\t\t\tHASLO:"<<endl<<endl;
    cout<<"\t\t\t\t"<<twojeslowo<<endl<<endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    cout<<"\nZgadnij tytul. Ma on "<<lenght<<" liter. Mozesz zgadywac "<<"po jednej literze naraz.\n";
    cout<<"Zgadnij litere: ";
}
