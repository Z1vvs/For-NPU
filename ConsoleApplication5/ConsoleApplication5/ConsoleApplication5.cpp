#include <iostream>

using std::cout;
using std::endl;

bool induct() {
    bool ISXANUMBEREQUALORLOWERTHAN5 = true;
    bool ISYEQUALTO5 = true;
    bool ISEQUASIONEQUALORLOWERTHAN25 = true;
    bool RESULT = ISXANUMBEREQUALORLOWERTHAN5 &&
        ISYEQUALTO5 &&
        ISEQUASIONEQUALORLOWERTHAN25;
    return RESULT;
}

bool deduct() {
    bool ISXNOTNOTANUMBEREQUALORLOWERTHAN5 = true;
    bool ISYNOTNOTEQUALTO5 = true;
    bool ISEQUASIONNOTNOTEQUALORLOWERTHAN25 = true;
    bool ANOTHERRESULT = ISXNOTNOTANUMBEREQUALORLOWERTHAN5 &&
        ISYNOTNOTEQUALTO5 &&
        ISEQUASIONNOTNOTEQUALORLOWERTHAN25;
    return ANOTHERRESULT;
}

int main() {
    setlocale(LC_ALL, "");
    cout << "Iíäóêòèâíèé ìåòîä = " << induct() << endl;
    cout << "Äåäóêòèâíèé ìåòîä = " << deduct() << endl;
    cout << "Ïðîãðàìà ïðàöþº (÷åñíî) :)" << endl;
}

/*
Ïðîãðàììèñò — ÷òî ýòî çíà÷èò?
Ýòî ñèëüíûé ÷åëîâåê!
Íàä ïðîãðàììîé íå çàïëà÷åò,
À ðàáîòàòü áóäåò âåê,
Ïóñòü æå ðàçíûå ïðîãðàììû
Áûñòðî ïèøóòñÿ, ëåãêî!
Ïóñòü ñâîèì óìîì âû ñàìè
Äîáèâàåòåñü âñåãî!
*/
