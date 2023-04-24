#include"ProjectOOP5.h"

int main() {
	WeatherStation::team tm;
	WeatherStation::generalinfo gi;

	gi.setReportnumber(5);
	tm.setTeamnumberactive(8);

	cout << "Report number " << gi.getReportnumber() << endl;
	cout << "Avg temperature " << gi.generalinfo::avgtemperature << endl;
	cout << "Atmosphere pressure " << gi.generalinfo::atmpressure << endl;
	cout << "Air humidity " << gi.generalinfo::airhum << endl;
	cout << "Active team members " << tm.getTeamnumberactive() << endl;
}