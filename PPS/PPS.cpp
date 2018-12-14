
/* 
	Any suggestions are welcome. Please contact me if you wanna
	improve this solution. 

	Problems and bugs are expected. Do contact me if you find 
	some of them
*/

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
void getQuotient() {
	int num1, num2;
	cout << "Enter num1: ";
	cin >> num1; 
	cout << "Enter num2: ";
	cin >> num2;
	if (num2 != 0) {
		cout << num1 / num2;
	}
	else {
		cout << "num2 can't be zero";
	}
}
// #4
void generateSumOfFourNumbers() {
	int n1, n2, n3, n4, sum;
	cout << "Enter 4 numbers: ";
	cin >> n1 >> n2 >> n3 >> n4;
	sum = n1 + n2 + n3 + n4;
	cout << "Sum: " << sum;
} 
// #5
void sumAndAverageOfMarks() {
	int s1, s2, s3, s4, s5, sum, avg;
	cout << "Enter marks of students: ";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	sum = s1 + s2 + s3 + s4 + s5;
	avg = sum / 5;
	cout << "Sum: " << sum << " Average: " << avg;
}
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
void sayGreatIfGreaterThan80() {
	int aNumber;
	cout << "Enter a number: ";
	cin >> aNumber; 
	if (aNumber > 80) cout << "good";
	else cout << "Try again";
}
// #8
void isDivisableOrNot() {
	int num1, num2;
	cout << "Enter num1 and num2: ";
	cin >> num1 >> num2;
	if (num2 != 0) {
		if (num1 % num2 == 0) {
			cout << "Divisable";
		}
		else {
			cout << "Not divisable";
		}
	}
	else {
		cout << "illegal Operation";
	}
}
// #9
void sumOf10UserGivenEvenNumbers() {
	int sum = 0;
	int n = 10;
	int number;
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
void printFibonacciSeries() {
	int prev1 = 0, prev2 = 1, current = 0, limit;
	cout << "Enter limit: ";
	cin >> limit; 
	while (limit > 0) {
		cout << current << endl;
		prev1 = prev2;
		prev2 = current;
		current = prev1 + prev2;
		limit--;
	}
}
// #12
void tempFtoC() {
	int tempInF, tempInC;
	cout << "Enter Temperature in F: ";
	cin >> tempInF;
	tempInC = (tempInF - 32) * (5 / 9);
	cout << "Temperature in C: " << tempInC;
}
// #13
void calculateThePay() {
	int payRate, hoursWorked;
	cout << "Hours Worked: ";
	cin >> hoursWorked;
	cout << "Payrate: ";
	cin >> payRate;
	cout << "Pay: " << hoursWorked * payRate;
}
// #14
void DidShePass() {
	int marks;
	cout << "Enter marks: ";
	cin >> marks;
	if (marks >= 50) cout << "She passed bruh, you got problem?";
	else cout << "She failed :( better next time";
}
// #15
void howMuchtoPayThisPoorMan() {
	int payRate, hoursWorked, regularPay;
	cout << "How many hours did you grind"
		<< endl
		<< "> ";
	cin >> hoursWorked;
	cout << "How much per hour that fat boi give ya?"
		<< endl
		<< "Rs. ";
	cin >> payRate;
	if (hoursWorked > 40) {
		regularPay = 40 * payRate;
		int overTime = hoursWorked - 40;
		double overTimePay = overTime * 1.5 * payRate;
		cout << "That fat boi needs to give ya Rs."
<< regularPay
<< " with overtime pay of Rs."
<< overTimePay
<< " Total of Rs. "
<< overTimePay + regularPay;
	}
	else {
	regularPay = hoursWorked * payRate;
	cout << "Voila, you need to be paid Rs."
		<< regularPay
		<< " by that fat boi. ";
	}
}
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
// #17 a)
void greatestIn3() {
	int a, b, c;
	cout << "Enter a b c: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << "a is greatest bud! :D ";
	else if (b > a && b > c)
		cout << "b is THE GREATEST! HUH!";
	else if (c > a && c > b)
		cout << "c is the BIG BOI!";
}
// #17 b)
void greatestIn3TheNestedWay() {
	int a, b, c;
	cout << "Enter a b c: ";
	cin >> a >> b >> c;
	if (a > b)
	{
		if (a > c) cout << "a boi! ";
		else if (a == c) cout << "a and c too";
		else cout << "c is the king";
	}
	else if (a == b) {
		if (a > c)
			cout << "a and b too";
		else if (a == c)
			cout << "a b c, saray iko vargay :P";
		else
			cout << "c is the king";
	}
	else {
		if (b > c) cout << "b for baray walay log";
		else if (b == c) cout << " b and c bhai bhai, r..";
		else cout << "c is the king";
	}
}
// #17 c)
// ---------------------------------
// did'nt understand the statement 
// if you have solution contact me :D
// ----------------------------------
// #18
void greatestIn4() {
	int a, b, c, d;
	cout << "Suitable way. just tells the greatest. doesn't tell if he has a bhai :P";
	cout << "Enter a b c d: ";
	cin >> a >> b >> c >> d;
	if (a > b && a > c && a > d) cout << "a for ali bhai";
	else if (b > a && b > c && b > d) cout << "b for bara bhai";
	else if (c > a && c > b && c > d) cout << "c for chota but it's bara this time";
	else if (d > a && d > c && d > b) cout << "d for dado is the best!";
}
// #19
void gradingSystem() {
	cout << "Trust me, this one is better than LMS! :P\n";
	int marks;
	cout << "Enter user marks: ";
	cin >> marks;
	if (!(marks > 0 || marks < 100)) {
		cout << "...mazak ay?";
	}
	else {
		// valid number idhar ayein gay
		if (marks < 60) {
			cout << "bhai fail hai tu, F deta may tujhe. parh liya kar nikamay";
		}
		else if (marks < 70 && marks >= 60) {
			cout << "papu pass hogya. D grade hai bhai. royein naw. mene tujhe pass kar diya hai";
		}
		else if (marks < 80 && marks >= 70) {
			cout << "jani tu great hia. C grade agya";
		}
		else if (marks < 90 && marks >= 80) {
			cout << "tu cheating nahi karata :(. B grade tera";
		}
		else if (marks >= 90) {
			cout << "topper log. A grade. ";
		}
	}
}
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
void timeDifferenceBata() {
	int time1hours, time2hours;
	int time1mins, time2mins;
	cout << "Enter time1 hours: ";
	cin >> time1hours;
	cout << "Enter time1 mintues: ";
	cin >> time1mins;
	cout << "Enter time2 hours: ";
	cin >> time2hours;
	cout << "Enter time2 mintues: ";
	cin >> time2mins;
	int time1InSeconds = time1hours * 60 * 60 + time1mins * 60;
	int time2InSeconds = time2hours * 60 * 60 + time2mins * 60;
	int timeDifference = time2InSeconds - time1InSeconds;
	if (timeDifference < 0) timeDifference *= -1;
	int differenceHours = timeDifference / 60 / 60;
	int differenceMins = (timeDifference / 60) - differenceHours * 60;
	cout << differenceHours << " hours "
		<< differenceMins << " mins of difference";
}
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
		<< "Have a good day :)"
		<< endl;
	timeDifferenceBata();
}

