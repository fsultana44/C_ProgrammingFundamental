#include<iostream>
#include<cmath>
#include <string>

using namespace std;
void bodyTemp(string Name, int Age,double Temperature);
void myFunction();
int Addition(int x, int y);
void MaxFun();
void DisArray();

// write the main function to execute the ´code
int main() {
	int GradePoint;
	std::cout << "Enter the grade point: ";
	std::cin >> GradePoint;
	// Example of if , else if and nested if statement.
	if(GradePoint> 50){
		if ((GradePoint >= 51) && (GradePoint <= 60))  {
			std::cout << "You passed  " << endl;
		}
		 else if ((GradePoint >= 61) && (GradePoint <= 75)){
			std::cout << "You passed with good grade " << endl;
		}
		else if (GradePoint >=76) {
			std::cout << "You passed with very good grade " << endl;
		}
	}
	else if (GradePoint >= 90) {
		std::cout << "You passed with excellent grade" << endl;
	}
	else if (GradePoint < 50) {

		std::cout << "You did not pass" << endl;
	}
	int time;
	std::cout << "Enter the time: \n";
	std::cin >> time;
	string Result = ((time < 18) ? "Good day." : "Good evening.");
	std::cout << Result << endl;;
	// example of some function 
	myFunction(); // declear the function
	bodyTemp("Tuli", 30, 96.70);
	int z = Addition(6, 7);
	std::cout << "Sum of the two number :" << z;
	MaxFun();
	return 0;
}
// creating the function
void myFunction() {
	int i;
	for (i = 0; i <= 5; i++) {
		std::cout << i << endl;
	}
}

void bodyTemp(string Name, int Age, double Temperature) {
	
	std::cout << "patient  name: " << Name << "Age " << Age <<" Temperature "<< Temperature << endl;
}

// function with return value
int Addition(int x, int y) {
	
	return (x + y);
}

// create a function to find max and min number from an array
void MaxFun() {
	int Arr[5], Max, Min, i;
	std::cout << "\n Enter the integer array " << endl;
	for (i = 1; i < 5; ++i){
		cin >> Arr[i];
	}
	/*cout << "Your array are " << Arr[i] << endl;*/
	
	Max = Arr[0];
	Min = Arr[0];
	for (i = 1; i <= 5; ++i) {
		if (Max < Arr[i]) {
			Max = Arr[i];
		}
			
	    else if (Min > Arr[i]){
			Min = Arr[i];
		}
			
	
	}
	std::cout << "The max number is " << Max << endl;
	std::cout << "The min number is " << Min << endl;
}
