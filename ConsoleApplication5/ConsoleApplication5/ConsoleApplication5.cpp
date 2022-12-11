#include <iostream>

using std::cout;
using std::endl;

bool induct() {
    bool XISANUMBEREQUALORLOWERTHAN5 = true;
    bool YISEQUALTO5 = true;
    bool EQUASIONISEQUALORLOWERTHAN25 = true;
    bool RESULT = XISANUMBEREQUALORLOWERTHAN5 &&
        YISEQUALTO5 &&
        EQUASIONISEQUALORLOWERTHAN25;
    return RESULT;
}

bool deduct() {
    bool XISNOTNOTANUMBEREQUALORLOWERTHAN5 = true;
    bool YISNOTNOTEQUALTO5 = true;
    bool EQUASIONISNOTNOTEQUALORLOWERTHAN25 = true;
    bool ANOTHERRESULT = XISNOTNOTANUMBEREQUALORLOWERTHAN5 &&
        YISNOTNOTEQUALTO5 &&
        EQUASIONISNOTNOTEQUALORLOWERTHAN25;
    return ANOTHERRESULT;
}

int main() {
    setlocale(LC_ALL, "");
    cout << "Iндуктивний метод = " << induct() << endl;
    cout << "Дедуктивний метод = " << deduct() << endl;
    cout << "Програма працює (чесно) :)" << endl;
}

/*
Программист — что это значит?
Это сильный человек!
Над программой не заплачет,
А работать будет век,
Пусть же разные программы
Быстро пишутся, легко!
Пусть своим умом вы сами
Добиваетесь всего!
*/