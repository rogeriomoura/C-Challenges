#include <iostream>
#include <time.h>
using namespace std;

bool calculate(const int number);
void display(const int number, const bool isPerfect);

int main(){
	cout.precision(3);
	clock_t t1,t2; //Counting the time
    t1=clock();    //Declaring Time start
	int number = 1;
	bool isPerfect;
	
	cout << "A perfect number is a positive number that is equal to " << endl
		 << "the sum of its proper positive divisors, excluding the number itself.\n";
	cout << "Here are the Perfect Numbers from 1 to 1.000.000.\n" << endl;
	
	do{
		isPerfect = calculate(number);
		display(number, isPerfect);
		number++;
	}while (number != 1000001);
	
	t2=clock(); //Declaring Final time
    float diff ((float)t2-(float)t1);
	float seconds = diff / CLOCKS_PER_SEC; //Getting seconds
	float minutes = seconds / 60.;
    cout << "This operation took approximately: " << showpoint << minutes << " minutes!!!" << endl;
    //system ("pause");
	
	return 0;
}

bool calculate(const int number){
	if (number == 1){
		return true;
	}
	
	int count = 0;
	for (int i = 1; i < number; i++){
		if (number % i == 0){
			count += i;
		}
		// cout << "Calculating...\r";
		// cout << "Calculating...\r";
		// cout << "cAlculating...\r";
		// cout << "cAlculating...\r";
		// cout << "caLculating...\r";
		// cout << "caLculating...\r";
		// cout << "calCulating...\r";
		// cout << "calCulating...\r";
		// cout << "calcUlating...\r";
		// cout << "calcUlating...\r";
		// cout << "calcuLating...\r";
		// cout << "calcuLating...\r";
		// cout << "calculAting...\r";
		// cout << "calculAting...\r";
		// cout << "calculaTing...\r";
		// cout << "calculaTing...\r";
		// cout << "calculatIng...\r";
		// cout << "calculatIng...\r";
		// cout << "calculatiNg...\r";
		// cout << "calculatiNg...\r";
		// cout << "calculatinG...\r";
		// cout << "calculatinG...\r";
	}
	
	if (count == number){
		return true;
	}
	
	else{
		return false;
	}
}

void display(const int number, const bool isPerfect){
	if (isPerfect == true){
		cout << "The number " << number << " is a perfect number!" << endl;
	}
	
	else{
		return;
	}
}