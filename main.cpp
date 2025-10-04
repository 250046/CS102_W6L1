#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

// Problem - 1
// float productFun(float a, float b) {
//     return a*b;
// }

// Problem - 2
// float acceleration(float v1, float v2, float t) {
//     return ((v2*v1)/(t));
// }

// Problem - 3
// float fun(float radius) {
//     return (3.14*(radius*radius));
// }

// Problem - 4
// void operation(int a, int b) {
//     cout << "Perimeter is " << 2*(a+b) << endl;
// }
// void operation(double a, double b) {
//     cout << "Area is " << a*b << endl;
// }

// Problem - 5
// void swap(int &a, int &b) {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

// Problem - 6
// void factorial(int n=1) {
//     long long sum=1;
//     for (int i = 1; i<(n+1); i++) {
//         sum *= i;
//     }
//     cout << "The factorial of " << n << " is " << sum << endl;
// }

// Problem - 7
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// Problem - 8
// void max_finder(int x, int y, int z) {
//     if ((x>y) || (x>z)) {
//         cout << "Maximum: " << x << endl;
//     } else if ((y>x) || (y>z)) {
//         cout << "Maximum: " << y << endl;
//     } else if ((z>x) || (z>y)) {
//         cout << "Maximum: " << z << endl;
//     } else {
//         cout << "Everything is equal" << endl;
//     }
// }

// void min_finder(int x, int y, int z) {
//     if ((x<y) || (x<z)) {
//         cout << "Minimum: " << x << endl;
//     } else if ((y<x) || (y<z)) {
//         cout << "Minimum: " << y << endl;
//     } else if ((z<x) || (z<y)) {
//         cout << "Minimum: " << z << endl;
//     } else {
//         cout << "Everything is equal" << endl;
//     }
// }

// Problem - 9
// int sum(int x, int y){
//     return (x+y);
// }

// int subtract(int x, int y){
//     return (x-y);
// }

// int product(int x, int y){
//     return (x*y);
// }

// float division(float x, float y){
//     return(x/y);
// }

// Problem - 10
// int getTriangularNumber(int n) {
//     return (n*(n+1)/2);
// }
// Problem - 10 - Mini Program
// void miniProg(int x=75) {
//     int TrigNumber=0;
    
//     for (int i=1; i<=x; i++) {
//         TrigNumber = (i*(i+1)/2);
//         cout << TrigNumber << " ";
//         if (i%5==0) {
//             cout << endl;
//         }
//     }
// }

// Problem - 11
// void displayEven(int x) {
//     while(x>0) {
//         int original = x % 10;
        
//         if (original%2==0) {
//             cout << original << ", ";
        
//         }

//         x /= 10;
//     }

// }

// Project - 12
// int cubeOfDigits(int number) {
//     int sum = 0;

//     while (number>0) {
//         int digit = number % 10;
//         sum += (digit*digit*digit);
//         number /= 10;
//     }

//     return sum;
// }

// void isArmstrong(int number) {
//     int sum = 0;
//     int old_number = number;

//     while (number>0) {
//         int digit = number % 10;
//         sum += (digit*digit*digit);
//         number /= 10;
//     }

//     cout << "Sum is " << sum << endl;

//     if (sum==old_number) {
//         cout << "It is an Armstrong integer" << endl;
//     } else {
//         cout << "It is not an Armstrong integer" << endl;
//     }
// }

// Project - 13
// int numberOfDaysInFebruary(int year) {
//     int original = year;
//     if (year % 400 == 0) {
//         return 29;   // divisible by 400 → leap year
//     } else if (year % 100 == 0) {
//         return 28;   // divisible by 100 but not 400 → not leap
//     } else if (year % 4 == 0) {
//         return 29;   // divisible by 4 but not 100 → leap year
//     } else {
//         return 28;   // not divisible by 4 → not leap
//     }
// }

// Mini Program
// void numOfFeb(int year=1983) {
//     for (int y = year; y <= 1985; y++) {
//         cout << "Year: " << y << endl;

//         int days;
//         if (y % 400 == 0) {
//             days = 29;
//         } else if (y % 100 == 0) {
//             days = 28;
//         } else if (y % 4 == 0) {
//             days = 29;
//         } else {
//             days = 28;
//         }

//         // print days in rows of 5
//         for (int d = 1; d <= days; d++) {
//             cout << d << " ";
//             if (d % 5 == 0) {
//                 cout << endl;
//             }
//         }
//         cout << "\n\n"; // separate years
//     }
// }

// Problem 14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
// }

// Problem 15
// void printASCII(char ch1, char ch2, int numberPerLine) {
//     int count = 0;

//     for (char ch = ch1; ch <= ch2; ch++) {
//         cout << ch << ":" << setw(3) << int(ch) << "  ";
//         count++;

//         if (count % numberPerLine == 0) {
//             cout << endl;
//         }
//     }
//     cout << endl;
// }

// Problem 16
// void printMatrix(int n) {

//     srand(time(0));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             int value = rand() % 1001; 
//             cout << setw(5) << value;
//         }
//         cout << endl;
//     }
// }

// Problem - 17
// bool isPalindrome(int num) {
//     int original = num, reversed = 0;
//     while (num > 0) {
//         reversed = reversed * 10 + (num % 10);
//         num /= 10;
//     }
//     return original == reversed;
// }

// Problem - 18
// double pi = 3.1415;
// double e  = 2.7182;


// double seriesA(int n) {
//     double sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += pi * pow(2, -i);
//     }
//     return sum;
// }


// double seriesB(int n) {
//     double product = 1;
//     for (int i = 1; i <= n; i++) {
//         product *= (pi / 2.0) * pow(i, e);
//     }
//     return product;
// }


// double seriesC(int n) {
//     double sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += pow(-1, i) * pow(2, i) / (2 * pi + i);
//     }
//     return sum;
// }


// double seriesD(int n) {
//     double sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += (2 * i * pi) / pow(e, i);
//     }
//     return sqrt(sum);
// }

// Problem - 19
// void displaySortedNumber(double a, double b, double c) {
//     // simple swap logic
//     if (a > b) swap(a, b);
//     if (a > c) swap(a, c);
//     if (b > c) swap(b, c);

//     cout << "Numbers in increasing order: "
//          << a << " " << b << " " << c << endl;
// }

// Problem - 20
// string convertMillis(long millis) {
//     long totalSeconds = millis / 1000;
//     long seconds = totalSeconds % 60;
//     long totalMinutes = totalSeconds / 60; 
//     long minutes = totalMinutes % 60; 
//     long hours = totalMinutes / 60; 

//     return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
// }

// Problem - 22
// double area(int n, double side) {
//     const double PI = 3.141592653589793;
//     return (n * side * side) / (4 * tan(PI / n));
// }

// Problem - 23
// int rollDice() {
//     int die1 = rand() % 6 + 1; // 1 to 6
//     int die2 = rand() % 6 + 1; // 1 to 6
//     cout << "You rolled " << die1 << " + " << die2 << " = " << (die1 + die2) << endl;
//     return die1 + die2;
// }

// Problem - 24
// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }


// int reverseNumber(int n) {
//     int rev = 0;
//     while (n > 0) {
//         rev = rev * 10 + (n % 10);
//         n /= 10;
//     }
//     return rev;
// }


// bool isPalindrome(int n) {
//     return n == reverseNumber(n);
// }

// Problem - 25
// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int digitSum(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// Problem - 26
int binaryToDecimal(const string &binary) {
    int decimal = 0;
    for (char c : binary) {
        decimal = decimal * 2 + (c - '0');
    }
    return decimal;
}


int decimalToOctal(int decimal) {
    int octal = 0, place = 1;
    while (decimal > 0) {
        int rem = decimal % 8;
        octal += rem * place;
        place *= 10;
        decimal /= 8;
    }
    return octal;
}


int bin2Octal(int binary) {
    string binStr = to_string(binary);
    int decimal = binaryToDecimal(binStr);
    return decimalToOctal(decimal);
}

int main() {

    // Problem - 1
    // float x, y;
    // cin >> x >> y;
    // cout << productFun(x, y);
    // return 0;

    // Problem - 2
    // float x, y, z;
    // cin >> x >> y >> z;

    // cout << acceleration(x, y, z) << endl;
    // return 0;

    // Problem - 3
    // float userRadius;
    // cin >> userRadius;
    // cout << fun(userRadius);
    // return 0;

    // Problem - 4
    // operation(2, 2);
    // operation(3.3, 5.5);
    // return 0;

    // Problem - 5
    // int x = 5, y = 10;
    // cout << "Before swap: x=" << x << ", y=" << y << endl;
    // swap(x, y);
    // cout << "After swap: x=" << x << ", y=" << y << endl;
    // return 0;

    // Problem - 6
    // int userNum;
    // cout << "Enter a number to find factorial of it: " << endl;
    // cin >> userNum;
    // factorial(userNum);
    // return 0;

    // Problem - 7
    // int a, b;
    // cin >> a >> b;
    // cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    // return 0;

    // Problem - 8
    // int a, b, c;
    // cin >> a >> b >> c;
    // max_finder(a, b, c);
    // min_finder(a, b, c);

    // Problem - 9
    // int num1, num2;
    // cin >> num1 >> num2;

    // cout << "Sum: " << sum(num1, num2) << endl;
    // cout << "Subtraction: " << subtract(num1, num2) << endl;
    // cout << "Product: " << product(num1, num2) << endl;
    // cout << "Division: " << division(num1, num2) << endl;

    // return 0;

    // Problem - 10
    // int userNum;
    // cout << "Select Triangular number: " << endl;
    // cin >> userNum;

    // cout << "That number is: " << getTriangularNumber(userNum) << endl;
    // return 0;

    // miniProg();
    // return 0;

    // Problem - 11
    // int userInt;
    // cout << "Enter integer to extract even values: ";
    // cin >> userInt;
    
    // cout << "Even values: ";
    // displayEven(userInt);
    // cout << endl;

    // Problem - 12
    // int userInt;
    // cout << "Enter an integer to check its Armstrongness: ";
    // cin >> userInt;
    // isArmstrong(userInt);
    // return 0;

    // Problem - 13
    // cout << numberOfDaysInFebruary(2008) << " days in February in " << year << endl;
    // return 0;
    // numOfFeb(1983);
    // return 0;

    // Problem - 14
    // double investmentAmount, annualInterestRate;


    // cout << "Enter investment amount: ";
    // cin >> investmentAmount;

    // cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    // cin >> annualInterestRate;

    // double monthlyInterestRate = annualInterestRate / 12 / 100;


    // cout << "\nYears" << setw(25) << "Future Value" << endl;
    // cout << "-----------------------------------" << endl;


    // for (int years = 1; years <= 30; years++) {
    //     double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, years);
    //     cout << setw(4) << years << setw(25) << fixed << setprecision(2) << futureValue << endl;
    // }

    // return 0;

    // Problem - 15
    // cout << "ASCII values from 'a' to 'm':" << endl;
    // printASCII('a', 'm', 6);
    // return 0;

    // Problem - 16
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // cout << "\nRandom " << n << "x" << n << " matrix:\n";
    // printMatrix(n);

    // return 0;

    // Problem - 17
    // int count = 0; 
    // int num = 2;

    // cout << "First 50 even palindrome numbers:\n";

    // while (count < 50) {
    //     if (num % 2 == 0 && isPalindrome(num)) {
    //         cout << setw(6) << num; 
    //         count++;
    //         if (count % 5 == 0) cout << endl; // 5 per line
    //     }
    //     num++;
    // }

    // return 0;

    // Problem - 18
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // cout << "Series A = " << seriesA(n) << endl;
    // cout << "Series B = " << seriesB(n) << endl;
    // cout << "Series C = " << seriesC(n) << endl;
    // cout << "Series D = " << seriesD(n) << endl;

    // return 0;

    // Problem - 19

    // displaySortedNumber(10.0, 20.1, 40.2);

    // double x, y, z;
    // cout << "Enter three numbers: ";
    // cin >> x >> y >> z;

    // displaySortedNumber(x, y, z);

    // return 0;

    // Problem - 20

    // long millis;
    // cout << "Enter milliseconds: ";
    // cin >> millis;

    // cout << "Converted time: " << convertMillis(millis) << endl;
    // return 0;

    // Problem - 21
    // time_t now = time(0);


    // tm *ltm = localtime(&now);


    // cout << "Current date and time is "
    //      << 1900 + ltm->tm_year << "-" 
    //      << 1 + ltm->tm_mon << "-" 
    //      << ltm->tm_mday << " " 
    //      << ltm->tm_hour << ":" 
    //      << ltm->tm_min << ":" 
    //      << ltm->tm_sec  
    //      << endl;

    // return 0;

    // Problem - 22
    // int n;
    // double side;


    // cout << "Enter the number of sides: ";
    // cin >> n;
    // cout << "Enter the side: ";
    // cin >> side;

    // cout << "The area of the polygon is " 
    //      << area(n, side) << endl;

    // return 0;

    // Problem - 23
    // srand(time(0));

    // int sum = rollDice();

    // if (sum == 2 || sum == 3 || sum == 12) {
    //     cout << "You lose" << endl;
    // } 
    // else if (sum == 7 || sum == 11) {
    //     cout << "You win" << endl;
    // } 
    // else {
    //     int point = sum;
    //     cout << "point is " << point << endl;


    //     while (true) {
    //         sum = rollDice();
    //         if (sum == point) {
    //             cout << "You win" << endl;
    //             break;
    //         } else if (sum == 7) {
    //             cout << "You lose" << endl;
    //             break;
    //         }
    //     }
    // }

    // return 0;

    // Problem - 24
    // int count = 0;
    // int number = 13; 
    // cout << "First 100 emirps:\n";

    // while (count < 100) {
    //     if (isPrime(number)) {
    //         int rev = reverseNumber(number);
    //         if (!isPalindrome(number) && isPrime(rev)) {
    //             cout << setw(6) << number;
    //             count++;
    //             if (count % 10 == 0) cout << endl;
    //         }
    //     }
    //     number++;
    // }

    // return 0;

    // Problem - 25
    // cout << "Prime Number" << setw(15) << "Sum of digits" << endl;

    // int count = 0;
    // int num = 2;

    // while (count < 25) {
    //     if (isPrime(num)) {
    //         int sum = digitSum(num);
    //         if (isPrime(sum)) {
    //             cout << setw(6) << num << setw(15) << sum << endl;
    //             count++;
    //         }
    //     }
    //     num++;
    // }

    // return 0;

    // Problem - 26
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    int octal = decimalToOctal(decimal);

    cout << "Binary: " << binary 
         << " => Octal: " << octal << endl;

    return 0;
}
