#pragma once
#include<iostream>
#include<string>

using namespace std;

namespace WeatherStation {
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
    private:
        int reportnumber;
    public:
        static int avgtemperature;
        static float windspeed;
        static float atmpressure;
        static int airhum;
        const bool need_update = true;
        const char* director = "Max Voronin";

        void setReportnumber(int t) {
            reportnumber = t;
        }
        int getReportnumber() {
            return reportnumber;
        }
    };

    union team {
    private:
        int teamnumberactive;
    public:
        const int teamnumberall = 11;

        void setTeamnumberactive(int t) {
            teamnumberactive = t;
        }
        int getTeamnumberactive() {
            return teamnumberactive;
        }
    };
}