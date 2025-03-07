#include <iostream>
#include <conio.h>
using namespace std;
constexpr auto PI = 3;
//#define PI 3
auto mainMenu()
{
	int inputOfUser;
	cout << "to callculate day of your date enter '1'" << endl;
	cout << "----------------------------------------" << endl;
	cout << "to quit enter '2'" << endl;
	cout << "-----------------" << endl;
	cin >>	inputOfUser;
	cout << "----------------------------------------\n";
	return inputOfUser;
}

string dayOfWeek(int countyOfDay)
{
	string weekDay;
	switch (countyOfDay % 7)
	{
	case 0 :
		weekDay = "5shanbe"; break;
	case 1:
		weekDay = "4shanbe"; break;
	case 2:
		weekDay = "3shanbe"; break;
	case 3:
		weekDay = "2shanbe"; break;
	case 4:
		weekDay = "1shanbe"; break;
	case 5:
		weekDay = "shanbe"; break;
	case 6:
		weekDay = "jome"; break;
	default:
		break;
	}
	return weekDay;
}

int countingTheDays(int day, int  mounth, int year)
{
	long int daysBefor = 0;
	int NDay = 29, NMounth = 12, NYear = 1403;
	if ((year - 1) % 4 == 0)daysBefor++;
	if (NYear != year)
	daysBefor += (365*(NYear - year) + ((NYear - year) / 4));
	if (mounth <= 6) {
		daysBefor += (29 + 30 * 5 + (6 - mounth) * 31);
		daysBefor += (31 - day + 1);
	}
	else if (mounth <= 11) {
		daysBefor += 29 + 30 * (11 - mounth);
		daysBefor += (30 - day + 1);
	}
	else if (mounth == 12 && day < 30)
		daysBefor += (29 - day + 1);
	else
		daysBefor -= 364 ;

	return daysBefor;

}

string mainf(int flag) 
{
	int day, mounth, year;
	do
	{
		cout << "dd mm yyyy" << endl;
		cin >> day >> mounth >> year;
	} while (((day >= 32 && mounth < 7) || (day >= 31 && mounth < 12 && mounth >= 7) || (day >= 30 && mounth == 12 && ((year % 4) != 0)) || (day >= 31 && mounth == 12 && ((year % 4) == 0)||year > 1403||day>32||mounth>12)));
	
	int countyOfDay = countingTheDays(day, mounth, year);
	return dayOfWeek(countyOfDay);

}	

int main(void)
{
	//compiler in the case of combination of types uses the type that has the most usege of storge      _ O _
	//++a > a++ > () > * / > + - > =                                                                     \|/
	//a<b ? b : a;                                                                                        |
	//y = (x = 10, x + 4, 9);                                                                           _/ \_
	//remenber the name is type cast
	//cout.  width(amount you want to consider in a line)    .setf(ios::left or right (where you want to cout not to fill))   .fill('what char you want to fill with')
	//pow(2,3) = 2^3     fmod(6,4) = 6 mod 4 = 2     (f (-2.0))abs(-2) = 2     floar() or ceil()    (is)toupper (is)tolower()   int('char') = ascii code     char(int) = translate ascii
	//there is twe posible way for pointers to point to
	//  1-to point to arrays as an array that in this way int*p[] = {,arrays,} or you can make a 2D (or more With int(*p)[][] = 2orMoreD
	//:and to asses them you can use *(*(*(p+)+)+) 
	//  2-to make pointer to a function kooftType(*p)( kooftType2 , int ) = {kooftType}function(kooftType2 i , int k)
	//:to access them you can use p( int , int )
	//  3-to make an array of function you shall fallow this sintax kooftType(*p)(both type should be same(kooftType2) amd the county should be the same) = {function1 , function2}
	//;you can execute the same resualt but useing a function that in its prototype it take a function that it called like this fp( kooftTypeKeMide (*p)(kooftTypeKeMigire) , kooftTypeKeKarbarDaad)
	//                                                                                                                                    return (*p)(KarbarDaad);
	/*bool i = true;
	cout << !i <<endl;
	int a[] = { 2 , 33 , 44 };
	int b[] = { 53 , 42 , 43 };
	int* t[] = { a , b };
	cout << *(*(t+1)+2) << endl << &t << endl;
	int c[2][3][2] = { 22, 44, 66 ,77 ,99 ,100 };
	int* D2[] = { a,b };
	int (*D2p)[3][2] = c;
	cout << **(*(D2p + 1)+1);*/
	auto menu = mainMenu();
	if (menu == 2) return 0;
	do { cout <<"--------\n" << mainf(0) << "\n--------" << endl; menu = mainMenu(); } while (menu != 2);
}
