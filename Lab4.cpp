//Melanie Daugherty
//July 1, 2013
//CSC 123 Parkland



#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    using namespace std;

    int numBody = 0, Antennae = 0, Wings = 0, Tongue = 0, numLeg = 0, Head = 0;
    int diceRoll;

    do
    {
        cout << "Enter die number: " << endl;
        cin >> diceRoll;
        if ( diceRoll < 1 || diceRoll > 6)
        {
            cout << "The number cannot be less than 1 or more than 6." << endl;
        }

        if ((!(diceRoll == 1)) && !(numBody >= 1) && (diceRoll >= 2) && (diceRoll <=6) )
        {
            cout << "You need to have a body. Try again." << endl;
        }
        if (diceRoll == 1 && numBody < 1)
        {
            numBody++;
            cout << "Body added." << endl;
        }


        if ( diceRoll == 1 && (numBody >= 0))
        {
            cout << "The Body has been collected. Please find the other parts." << endl;
        }


        if (diceRoll == 2 && numBody >= 1 && Head < 1)
        {
            Head++;
            cout << "Head added." << endl;
        }
        else

            if ( !(diceRoll == 2) && diceRoll >= 1 && diceRoll <=6 && !(diceRoll == 1) && !(Head >= 1) && numBody >= 1
                && !(diceRoll == 4) && !(diceRoll == 6))
            {
                cout << "The Head is needed before you can progress. Try again." << endl;
            }
        if (diceRoll == 2 && numBody >=1 && Head > 0)
        {
            cout << "The Head has been collected. Please find the other parts." << endl;
        }


        if (diceRoll == 3 && Head >= 1 && Antennae < 2)
        {
            Antennae +=2;
            cout<< "Antennae has been added."<<endl;
        }
        if (diceRoll ==3 && Head >= 1 && Antennae >= 2)
        {
            cout << "Antenna3 has been collected. Please find the other parts." << endl;
        }

        if (diceRoll == 4 && numBody >= 1 && Wings < 2)
        {
            Wings+=2;
            cout<<"Wings have been added." << endl;
        }
        if (diceRoll == 4 && numBody >=1 && Wings >= 12)
        {
            cout << "Wings have been collected.  Please find the other parts." << endl;
        }

        if (diceRoll == 5 && Head >= 1 && Tongue < 1)
        {
            Tongue++;
            cout<<"Tongue has been added." << endl;
        }
        if (diceRoll ==5 && Head >=1 && Tongue ==1)
        {
            cout<<"The Toungue has been collected.  Please find the other parts." << endl;
        }

        if (diceRoll == 6 && numBody >= 1 && numLeg < 4)
        {
            numLeg++;
            cout<<"A leg has been added." << endl;
        }
        if (diceRoll == 6 && numBody >=1 && numLeg >0 &&numLeg <4)
        {
            cout << "Leg has been collected.  Please find the other parts."<< endl;
        }
        if (diceRoll == 6 && numBody >=1 && numLeg == 4)
        {
            cout << "Collected the last leg.  Please find the other parts."  << endl;
        }
        cout << endl;
        cout << "Cootie so far: "<< " Body: "<< numBody << " Head: " << Head << " Wings: "<< Wings
        << " Antenna: " << Antennae << " Tongue: " << Tongue << " Legs: " << numLeg << endl;


    } while (!(numBody >= 1 && Head >= 1 && Antennae >= 2 && Wings >= 2 && Tongue >= 1 && numLeg >= 4));
    cout << "Your cootie has been completed." << endl;
    return 0;
}
