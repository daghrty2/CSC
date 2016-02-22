#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    int dice1roll;
    int dice2roll;
    int dice3roll;
    int dice4roll;
    int dice5roll;
    int numberof1s = 0, numberof2s = 0, numberof3s = 0, numberof4s = 0, numberof5s = 0, numberof6s=0;

    cout << "Enter Dice 1:";
    cin >> dice1roll;
    if (dice1roll<1 || dice1roll>6) {
        cout << "Invalid Entry.\n";
        return 0;
    }
    cout << "Enter Dice 2:";
    cin >> dice2roll;
    if (dice2roll<1 || dice2roll>6) {
        cout << "Invalid Entry.\n";
        return 0;
    }
    cout << "Enter Dice 3:";
    cin >> dice3roll;
    if (dice3roll<1 || dice3roll>6) {
            cout << "Invalid Entry.\n";
            return 0;
    }
    cout << "Enter Dice 4:";
    cin >> dice4roll;
    if (dice4roll<1 || dice4roll>6) {
        cout << "Invalid Entry.\n";
        return 0;
    }
    cout << "Enter Dice 5:";
    cin >> dice5roll;
    if (dice5roll<1 || dice5roll>6) {
        cout << "Invalid Entry.\n";
        return 0;
    }
    cout << "\n" << "\n" << "\n";
    if (dice1roll == 1)
    {
        numberof1s += 1;
    }
    if (dice1roll == 2)
    {
        numberof2s += 2;
    }
    if (dice1roll ==3)
    {
        numberof3s += 3;
    }
    if (dice1roll ==4)
    {
        numberof4s += 4;
    }
    if (dice1roll ==5)
    {
        numberof5s += 5;
    }
    if (dice1roll ==6)
    {
        numberof6s += 6;
    }
    if (dice2roll == 1)
    {
        numberof1s += 1;
    }
    if (dice2roll == 2)
    {
        numberof2s += 2;
    }
    if (dice2roll ==3)
    {
        numberof3s += 3;
    }
    if (dice2roll ==4)
    {
        numberof4s += 4;
    }
    if (dice2roll ==5)
    {
        numberof5s += 5;
    }
    if (dice2roll ==6)
    {
        numberof6s += 6;
    }
    if (dice3roll == 1)
    {
        numberof1s += 1;
    }
    if (dice3roll == 2)
    {
        numberof2s += 2;
    }
    if (dice3roll ==3)
    {
        numberof3s += 3;
    }
    if (dice3roll ==4)
    {
        numberof4s += 4;
    }
    if (dice3roll ==5)
    {
        numberof5s += 5;
    }
    if (dice3roll ==6)
    {
        numberof6s += 6;
    }
    if (dice4roll == 1)
    {
        numberof1s += 1;
    }
    if (dice4roll == 2)
    {
        numberof2s += 2;
    }
    if (dice4roll ==3)
    {
        numberof3s += 3;
    }
    if (dice4roll ==4)
    {
        numberof4s += 4;
    }
    if (dice4roll ==5)
    {
        numberof5s += 5;
    }
    if (dice4roll ==6)
    {
        numberof6s += 6;
    }
    if (dice5roll == 1)
    {
        numberof1s += 1;
    }
    if (dice5roll == 2)
    {
        numberof2s += 2;
    }
    if (dice5roll ==3)
    {
        numberof3s += 3;
    }
    if (dice5roll ==4)
    {
        numberof4s += 4;
    }
    if (dice5roll ==5)
    {
        numberof5s += 5;
    }
    if (dice5roll ==6)
    {
        numberof6s += 6;
    }
    cout << "1s:" << numberof1s << "\n";
    cout << "2s:" << numberof2s << "\n";
    cout << "3s:" << numberof3s << "\n";
    cout << "4s:" << numberof4s << "\n";
    cout << "5s:" << numberof5s << "\n";
    cout << "6s:" << numberof6s << "\n";

    //3 of a kind


    if (numberof1s >= 3 || numberof2s>=6 || numberof3s>=9 || numberof4s >= 12 || numberof5s >= 15 || numberof6s >=18)
    {
        cout << "3 of a kind: " << numberof1s + numberof2s + numberof3s + numberof4s + numberof5s + numberof6s <<endl;
    }
    else {
        cout << "3 of a kind: no value\n";
    }

    // 4 of a kind

    if (numberof1s >= 4 || numberof2s>=8 || numberof3s>=12 || numberof4s >= 16 || numberof5s >= 20 || numberof6s >=24)
    {
        cout << "4 of a kind: " << numberof1s + numberof2s + numberof3s + numberof4s + numberof5s + numberof6s <<endl;
    }
    else {
        cout << "4 of a kind: no value\n";
    }

    // full house
    if ( (numberof1s ==3 && (numberof2s == 4 || numberof3s == 6 || numberof4s == 8 || numberof5s == 10 || numberof6s==12))
        || (numberof2s == 6 && (numberof1s ==2 || numberof3s ==6 || numberof4s == 8 || numberof5s == 10 || numberof6s==12))
        || (numberof3s==9 && (numberof1s ==2 || numberof2s ==4 || numberof4s == 8 || numberof5s == 10 || numberof6s==12))
        || (numberof4s==12 && (numberof1s ==2 || numberof2s ==4 || numberof3s == 6 || numberof5s == 10 || numberof6s==12))
        || (numberof5s==15 && (numberof1s ==2 || numberof2s ==4 || numberof3s == 6 || numberof4s == 8 || numberof6s==12))
        || (numberof6s==18 && (numberof1s ==2 || numberof2s ==4 || numberof3s == 6 || numberof4s == 8 || numberof5s==10))
        || (numberof1s ==5 || numberof2s == 10 || numberof3s == 15 || numberof4s == 20 || numberof5s == 25 || numberof6s== 30))
        {
        cout << "full house: 25\n";

        }
    else {
        cout << "full house: no value\n";
        }
    // small straight

    if ((numberof1s >=1 && numberof2s >=2 && numberof3s >=3 && numberof4s >=4) ||
        (numberof2s>=2 && numberof3s>=3 && numberof4s >=4 && numberof5s >=5) ||
        (numberof3s >=3 && numberof4s >=4 && numberof5s >=5 && numberof6s >=6)) {

        cout << "small straight: 30\n";
    }
    else {
        cout << "small straight: no value\n";
    }
    // large straight

    if ((numberof1s >=1 && numberof2s >=2 && numberof3s >=3 && numberof4s >=4 && numberof5s >=5)||
        (numberof2s>=2 && numberof3s>=3 && numberof4s >=4 && numberof5s >=5 && numberof6s >=6)) {

        cout << "large straight: 40\n";
    }
    else {
        cout << "large straight: no value\n";
    }
    if (dice1roll == dice2roll == dice3roll == dice4roll == dice5roll){
        cout << "YAHTZEE!!! : 50\n";
    }
    else {
        cout << "YAHTZEE: no value\n";
    }

return 0;

}
