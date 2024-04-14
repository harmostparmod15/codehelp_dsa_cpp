#include <iostream>
using namespace std;

//  find maximum number among three numbers
// int max(int a, int b, int c) {
//   if (a > b && a > c) {
//     return a;
//   } else if (b > c && b > a) {
//     return b;
//   } else {
//     return c;
//   }
// }

//  counting till n
// void counting(int n) {
//   for (int i = 1; i <= n; i++) {
//     cout << i;
//   }
// }

// grade of students problem
// char studentGrade(int marks) {
//   if (marks >= 90) {
//     return 'a';
//   } else if (marks >= 80) {
//     return 'b';
//   } else if (marks >= 60) {
//     return 'c';
//   } else {
//     return 'e';
//   }
// }

// sum of even numbers upto n
// int sumOfEven(int n) {
//   int sum = 0;
//   for (int i = 2; i <= n; i = i + 2) {
//     sum += i;
//   }
//   return sum;
// }

//  radius of a cricle
// float areaOfCircle(float radius) { return 3.14 * radius * radius; }

// find if a number is odd or even
// void evenOrOdd(int number) {
//   if (number % 2 == 0) {
//     cout << number << " is even" << endl;
//   } else if (number % 2 != 0) {
//     cout << number << " is odd" << endl;
//   }
// }

//  find factorial of a given number
// int factorialOfNumber(int num) {
//   int fact = 1;
//   int result;
//   for (int i = 1; i <= num; i++) {
//      result = fact *= i;
//   }
//   return result;
// }

//  find if a given number is prime or not
// void primeOrNot(int n) {
//   for (int i = 2; i < n; i++) {
//     if (n % i == 0) {
//       cout << n << " is not prime number" << endl;
//       break;
//     } else {
//       cout << n << " is a prime number" << endl;
//       break;
//     }
//   }
// }

// counting of primes from 1 to n
// void countPrimes(int n) {
//   for (int i = 2; i <= n; i++) {
//     primeOrNot(i);
//   }
// }

//  temperature convertor from celsius to fahrenheit
// float celsiusToF(float temp){
// float fahr = (temp * 9)/5 + 32;
//   return fahr;
// }

int main() {

  // grading according to marks scored
  // int a;
  // cout << "enter the value of 1 number" << endl;
  // cin >> a;
  // int b;
  // cout << "enter the value of 2 number" << endl;
  // cin >> b;
  // int c;
  // cout << "enter the value of 3 number" << endl;
  // cin >> c;
  // int result = max(a, b, c);
  // cout << "max number is " << result << endl;

  //  counting till n
  // cout << "enter n";
  // int n;
  // cin >> n;
  // counting(n);

  // grade of students problem
  // cout << "enter marks of student" << endl;
  // int marks;
  // cin >> marks;
  // char grade = studentGrade(marks);
  // cout << "grade is " << grade << endl;

  //  sum of even numbers upto n
  // cout << "enter n";
  // int n;
  // cin >> n;
  // int result = sumOfEven(n);
  // cout << "sum is" << result;

  // //  display re OF CIRCLE
  // cout << "enter radius of circle" << endl;
  // float radius;
  // cin >> radius;

  // float area = areaOfCircle(radius);
  // cout << "area of circle is: " << area;

  // cout << "enter a number to know even or odd" << endl;
  // int num;
  // cin >> num;
  // evenOrOdd(num);

  //  find a factorial of number
  // cout << "enter a number to find factorial" << endl;
  // int number;
  // cin >> number;
  // int result = factorialOfNumber(number);
  // cout << "factorial of " << number << " is: " << result;

  // if a number is prime or not
  // cout << "enter a number to know is prime or not" << endl;
  // int n;
  // cin >> n;
  // primeOrNot(n);

  // counting of primes from 1 to n
  // cout << "enter number" << endl;
  // int n;
  // cin >> n;
  // countPrimes(n);

  // temepratur convertor
  // cout << "enter temperature in celsius" << endl;
  // float temp;
  // cin >> temp;
  // float result = celsiusToF(temp);
  // cout<<temp<<" in fahrenheit is: "<<result;

  return 0;
}
