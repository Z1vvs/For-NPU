#pragma warning(disable : 4996)

#include<iostream>
#include<string>
using namespace std;

enum week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

struct generalinfo {
    int reportnumber;
    int avgtemperature;
    float windspeed;
    float atmpressure1;
    int atmpressure2;
    int airhum;
} lol;

union team {
    int teamnumberall;
    int teamnumberactive;
} XD;

int main() {
    week today;
    today = Wednesday;

    generalinfo lol;
    lol.reportnumber = 4;
    lol.avgtemperature = 15;
    lol.windspeed = 9.5;
    lol.atmpressure1 = 992.2;
    lol.atmpressure2 = 744;
    lol.airhum = 86;

    team XD;
    XD.teamnumberall = 12;

    cout << "Day " << today + 1 << endl;
    cout << "Report number: " << lol.reportnumber << endl;
    cout << "\nAVG Temperature: " << lol.avgtemperature << " Celsius" << endl;
    cout << "Wind speed: " << lol.windspeed << " m/s" << endl;
    cout << "Atm. pressure: " << lol.atmpressure1 << " GPa or " << lol.atmpressure2 << " mmHg" << endl;
    cout << "Air humidity: " << lol.airhum << "%" << endl;
    cout << "\nAmount of people in the team: " << XD.teamnumberall << ", worked on project: " << XD.teamnumberactive << endl;
}