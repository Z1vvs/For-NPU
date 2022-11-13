#include <iostream>
#include <string>

using namespace std;
using std::wcout;
using std::wstring;
using std::wcin;
using std::endl;

//Информационная модель активации скидочного купона

void login();

int main() {
	int answ;
	wcout << L"Irish coupon activating mashine 9000 at your service!\n" << endl;
	wcout << L"What can I do for ya?\n\n" << endl;
	wcout << L"Enter 1 to login and activate your coupon\n" << endl;
	wcout << L"Enter 2 if you forgot your password\n" << endl;
	wcout << L"Enter 3 to exit\n" << endl; 
	wcin >> answ;

	switch (answ) {
		case 1:
			login();
			break;
		case 2:
			system("cls");
			wcout << L"We have an Eejit here, eh?\n" << endl;
			system("pause");
			system("cls");
			main();
		case 3:
			system("cls");
			wcout << L"You can't quit now, or I`ll shoot ya\n" << endl;
			wcout << L" ,______________________________________,.     " << endl;
			wcout << L"|_________________,----------._ [____]    `=-,_____....-----===== " << endl;
			wcout << L"               (_(||||||||||||)___________/                      |" << endl;
			wcout << L"                  `----------'        [ ))==-,                   |" << endl;
			wcout << L"                                      ```     `,  _,--....__     |" << endl;
			wcout << L"                                                `/          '==== " << endl;
			system("pause");
			system("cls");
			main();
	}
}

wstring RUser() {
	wstring RUser = L"root";
	return RUser;
}

wstring RPass() {
	wstring RPass = L"1324";
	return RPass;
}

wstring Yes() {
	wstring Yes = L"y";
	return Yes;
}

wstring No() {
	wstring No = L"n";
	return No;
}

void login() {
	//int userdata;
	wstring Username, Password, CouponId, Answer;
	system("cls");
	wcout << L"Enter your username and password goddamit!\n" << endl;
	wcout << L"\nUsername:\n";
	wcin >> Username;
	wcout << L"\nPassword:\n";
	wcin >> Password;

	if ((Username == RUser()) && (Password == RPass())) {
		wcout << L"\nAccess granted. Now gimme that coupon code!\n" << endl;
		wcout << L"\nCoupon code:\n";
		wcin >> CouponId;
		wcout << L"\nYour coupon code is" << CouponId << ", is that right? y or n?\n" << endl;
		wcin >> Answer;
		if (Answer == Yes()) {
			wcout << L"\nYa got scammed, mate! Now get lost!\n" << endl;
		}
		else if (Answer == No()) {
			wcout << L"\nEnter the right coupon than!\n" << endl;
			system("pause");
			system("cls");
			main();
		}
	}
	else if ((Username != RUser()) || (Password != RPass())) {
		wcout << L"\nYa ain`t in the database, mate.\n" << endl;
		system("pause");
		system("cls");
		main();
	}
}