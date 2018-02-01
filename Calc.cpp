#include <iostream>
using namespace std;

int main () 
{
	int first = 0;
	int second = 0;
	bool repeat = true;
	char dothis = 't';

	while (repeat = true){

		cout << "What is the first number that you would like to calculate?: \n";
		cin >> first;
		cout <<  "What is the seoncd number that you'd like to calculate?: \n";
		cin >> second;
		cout << " What type of operation should be performed on these numbers? +, -, *, or / :\n";
		cin >> dothis;

		if (dothis == '+') {
			cout << "The sum of your numbers is : " << first + second << endl;
		}else if (dothis == '-') {
			cout << "The difference of your numbers is : " << first - second << endl;
		}else if (dothis == '*') {
			cout << "The product of your numbers is: " << first * second << endl;
		}else if (dothis == '/') {
			cout << "The quotient of your numbers is: " << first / second << endl;
		}
		cout << endl;		
	}
	return 0;
}