#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int megaBM, month, megaBL, megaBC = 0;//megaBM = the amount of megabytes he gets to use each month, month = the amount of months, megaBL = the amount of megabytes he has left after each month.

	//cout << "Type in the amount of megabytes you get to use each month(1-100): " << endl;
		cin >> megaBM;
	//cout << "Type in the amount of months that your deal lasts for(1-100)" << endl;
		cin >> month;
		megaBC = megaBM;
		for (int i = 0; i < month; i++) {


				//cout << "How much data did you use up this month? max: " << megaBC + megaBM << endl;

				cin >> megaBL;

				megaBC = megaBC + (megaBM - megaBL);

		}
				
			
		
		//cout << "You have " << megaBC << " Megabytes left" << endl;
		cout << megaBC;


	getchar();
	return 0;
}