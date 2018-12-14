#include <iostream>

using namespace std; 

// #1  
void cookTea() {
	cout << "Bhai may chai nahi peta. Banani bhi nahi ati :)";
}
// #2
void addTwoNumbers() {
	int num1, num2, sum;
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	sum = num1 + num2;
	cout << "Sum: " << sum;
}
// #3
// #4
// #5
// #6
void findPercentageOfFourStudents() {
	int oMarks1, oMarks2, oMarks3, oMarks4, totalMarks;
	float percentage;
	cout << "Enter Obtained Marks of Student 1: ";
	cin >> oMarks1;
	cout << "Enter Obtained Marks of Student 2: ";
	cin >> oMarks2;
	cout << "Enter Obtained Marks of Student 3: ";
	cin >> oMarks3;
	cout << "Enter Obtained Marks of Student 4: ";
	cin >> oMarks4;
	cout << "Enter Total Marks: ";
	cin >> totalMarks;
	percentage = (oMarks1 + oMarks2 + oMarks3 + oMarks4) / (float)totalMarks * 100;
	cout << "Percentage: " << percentage;
}
// #7
// #8
// #9
// #10
void sumOfEvenNumbersFromUser() {
	int sum = 0;
	int n;
	int number;
	cout << "Enter n: ";
	cin >> n; 
	while (n >= 1) {
		cout << "Enter a number: ";
		cin >> number;
		if (number % 2 == 0) {
			sum += number;
		}
		n--;
	}
	cout << "Sum of Even Numbers: " << sum;
}
// #11
// #12
void tempFtoC() {
	int tempInF, tempInC;
	cout << "Enter Temperature in F: ";
	cin >> tempInF;
	tempInC = (tempInF - 32) * (5 / 9);
	cout << "Temperature in C: " << tempInC;
}
// #13
// #14
// #15
// #16
void greaterInTwo() {
	int num1, num2;
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "num1 is greater than num2";
	}
	 else {
	  cout << "num2 is greater than num1";
	}
}
// #17
// #18
// #19
// #20
void EvenOrOdd() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number % 2 == 0) {
		cout << "Number is Even";
	}
	else {
		cout << "Number is Odd";
	}
}
// #21
// #22
// #23
// #24
// #25
// #26 
void printRange() {
	int n, i = 1;
	cout << "Enter n: ";
	cin >> n;
	while (n < 0) {
		cout << "Invalid Input"
			<< endl
			<< "Enter n again: ";
		cin >> n;
	}
	while (i <= n) {
		cout << i << endl;
		i++;
	}
}
// #27
// #28
// #29
// #30
void largestInNNumbers() {
	int n, large = 0, number;
	cout << "Enter limit: ";
	cin >> n;
	while (n >= 1) {
		cout << "Enter a number: ";
		cin >> number;
		if (number > large)
			large = number;
		n--;
	}
	cout << "Largest Number: " << large;
}
// #31
// #32
void countPosNegNumbers() {
	int n, positive = 0, negative = 0;
	cout << "Enter n: ";
	cin >> n;
	while (n >= 1) {
		int number;
		cout << "Enter a number: ";
		cin >> number;
		if (number >= 0) {
			positive++;
		}
		else {
			negative++;
		}
		n--;
	}
	cout << "Positive count: " << positive << endl;
	cout << "Negative count: " << negative << endl;

}
// #33
// #34
// #35
// #36
void inputValidation() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	while (n < 0) {
		cout << "Invalid Input"
			<< endl
			<< "Enter n again: ";
		cin >> n;
	}
}
// #37
// #38
// #39
// #40 
void checkEvenOddTwoNumbers() {
	int number1, number2;
	cout << "Enter number1: ";
	cin >> number1;
	cout << "Enter number2: ";
	cin >> number2;
	if (number1 % 2 == 0 && number2 % 2 == 0) {
		cout << "Both Even";
	}
	else if (number1 % 2 == 1 && number2 % 2 == 1) {
		cout << "Both odd";
	}
	else {
		cout << "1 even 1 odd";
	}

}
// #41
// #42 
void secondLargeAndLarge() {
	int number, large = 0, secondLarge = 0, i = 1;
	while (i <= 3) {
		cout << "Enter a number: ";
		cin >> number;
		if (number > large) {
			large = number;
			secondLarge = large;
		}
		i++;
	}
	cout << "Largest: " << large << " Second Largest: " << secondLarge;
}
// #43
// #44
// #45
void reverseNumber() {
	int number, reverse = 0;
	cout << "Enter number: ";
	cin >> number;
	while (number < 0 || number > 9999) {
		cout << "Enter number again: ";
		cin >> number;
	}
	int numberBackup = number;
	while (number >= 1) {
		int lastDigit = number % 10;
		reverse = reverse * 10 + lastDigit;
		number /= 10;
	}
	cout << "Number: " << numberBackup;
	cout << "Reversed: " << reverse;
}
// #46
void swapper() {
	int a = 10, b = 5;
	// before interchanging 
	cout << "a= " << a << " b= " << b;
	int temp = a;
	a = b;
	b = temp;
	// after interchanging 
	cout << "a= " << a << " b= " << b;
}
// #47
// #48
// #49
// #50
// #51
// #52
void isDivisable() {
	int number1, number2;
	cout << "Enter number1: ";
	cin >> number1;
	cout << "Enter number2: ";
	cin >> number2;
	if (number2 != 0) {
		if (number1 % number2 == 0) {
			cout << "YES";
		}
	}
	if (number1 != 0) {
		if (number2 % number1 == 0) {
			cout << "YES";
		}
	}
}
// #53
// #54
// #55
// #56
void smallestNumber() {
	int number = 1, firstRun = 1, small;
	while (1) {
		cout << "Enter number: ";
		cin >> number;
		if (firstRun) {
			small = number;
			firstRun = 0;
		}
		if (number = 0) break;
		if (number < small) {
			small = number;
		}
	}
	cout << "Smallest Number: " << small; 
}
// #57
// #58
// #59
// #60
// #61
// #62
void gcd() {
	int number1, number2;
	cout << "Enter number1: ";
	cin >> number1;
	cout << "Enter number2: ";
	cin >> number2;
	int i = 1;
	int gcd = 1;
	while (i <= number1) {
		if (number1 % i == 0) {
			int j = 1;
			while (j <= number2) {
				if (number2 % i == 0) {
					if (i == j) {
						gcd = i;
					}
				}
				j++;
			}
		}
		i++;
	}
	cout << gcd;

}
// #63
// #64
// #65
// #66
void digitByDigitInputAndConversion() {
	int base9Number = 0, rbase9Number = 0, digit, sig = 0;
	double base10Number = 0;
	cout << "Enter a base-9 number so I can convert it to decimal"
		<< endl;
	while (1) {
		cout << "Enter digit: ";
		cin >> digit;
		if (digit < 0 || digit > 8) break;
		rbase9Number = rbase9Number * 10 + digit;
		base10Number = base10Number + pow(9, sig) * digit;
		sig++;
	}
	while (rbase9Number >= 1) {
		base9Number = base9Number * 10 + (rbase9Number % 10);
		rbase9Number /= 10;
	}
	cout << base9Number << " -> " << base10Number;
}
// #67
// #68
// #69
// #70
// #71
// #72
void accsendingOrder() {
	int a, b, c;
	cout << "Enter 3 numbers: ";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	while (1) {
		if (a > b) {
			int temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			int temp = c;
			c = a;
			a = temp;
		}
		if (a < b && b < c) {
			break;
		}
	}

}
// #73
// #74
// #75
void modulusWithoutOperator() {
	int divisor, toBeDivided;
	int quotient = 0;
	cout << "Enter a number to divide: ";
	cin >> toBeDivided;
	cout << "Enter a number to divide with: ";
	cin >> divisor;
	while (toBeDivided >= divisor) {
		toBeDivided -= divisor;
		quotient++;
	}
	cout << "Remainder: " << toBeDivided;
}
int main()
{
	cout << "Call any of function above main() to run. "
		<< endl
		<< "Have a good day :)";
}

