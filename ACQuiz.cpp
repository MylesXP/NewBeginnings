//Myles Parkinson
//This is a simple Assassin's Creed based quiz
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    char a1;

    //Question 1
    cout<<"   -------------------------------------\n";
    cout<<"1. Who was the first official assassin?:\n";
    cout<<"   -------------------------------------\n";

    //Possible Answers
    cout<<"   A: Bayek"<<endl;
    cout<<"   B: Connor Kenway"<<endl;
    cout<<"   C: Aveline de Grandpre"<<endl;
    cout<<"   D: Jacob Frye"<<endl;
    cout<<"\n";
    cin>>a1;

    //Dialog for when the answer is correct or not.
    if ( a1 == 'A' || a1 == 'a')
    {
        cout<<"\nCongratulations initiate, that's correct!";
        cout<<"\n";

    }
    else
    {
        cout<<"\n";
        cout<<"Hmm, sorry newbie, that's not correct.";
        cout<<"\n";
    }



    cin.get();

    return 0;


}
