//Myles Parkinson
//This is a simple Assassin's Creed based quiz
//Reminder: See how to not load next question if user got answer to previous one wrong
//Reminder: See how to have user repeat question until they get it right before loading next question
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"Assassin's Creed Quiz\n";
    cout<<"\n";

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
        cout<<"\n";
        cout<<"Congratulations initiate, that's correct!\n";
        cout<<"\n";

    }
    else
    {
        cout<<"\n";
        cout<<"Hmm, sorry newbie, that's not correct.\n";
        cout<<"\n";
        cin.get();
    }

    char a2;

    //Question 2
    cout<<"   -------------------------------------------------------------\n";
    cout<<"2. Where was Altair's base of operations in Assassin's Creed 1?:\n";
    cout<<"   -------------------------------------------------------------\n";

    //Possible Answers
    cout<<"   A: Damascus"<<endl;
    cout<<"   B: Masyaf"<<endl;
    cout<<"   C: Kentucky"<<endl;
    cout<<"   D: Allepo"<<endl;
    cout<<"\n";
    cin>>a2;

    //Dialog for Q2
    if( a2 == 'B' || a2 == 'b')
    {
        cout<<"\n";
        cout<<"Congratulations initiate, that's correct!\n";
        cout<<"\n";
    }
    else
    {
        cout<<"\n";
        cout<<"Hmm, that's not correct.\n";
        cout<<"\n";
    }

    char a3;

    //Question 3
    cout<<"   ---------------------------------------------------------------------------\n";
    cout<<"3. Who was the first known user of the Hidden Blade in Assassin's Creed lore?:\n";
    cout<<"   ---------------------------------------------------------------------------\n";

    //Possible Answers
    cout<<"   A: Edward"<<endl;
    cout<<"   B: Altair"<<endl;
    cout<<"   C: Haytham"<<endl;
    cout<<"   D: Darius"<<endl;
    cout<<"\n";
    cin>>a3;

    //Dialog for Q3
    if( a3 == 'D' || a3 == 'd')
    {
        cout<<"\n";
        cout<<"Congratulations initiate, that's correct!\n";
        cout<<"\n";
    }
    else
    {
        cout<<"\n";
        cout<<"Hmm, that's not correct.\n";
        cout<<"\n";
    }




    cin.get();

    return 0;

}


