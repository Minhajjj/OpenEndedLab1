#include<iostream>
using namespace std;
int main() {
char choice;
cout << "Do you want to find a prime number in a range (F) or check if a 
specific number is prime or not (C): ";
cin >> choice;
if (choice == 'f' || choice == 'F') {
int num, range;
cout << "Enter starting number here : ";
cin >> num;
cout << "Enter last number of range here : ";
cin >> range;
for (num; num <= range; num++) {
if (num == 1) {
continue;
}
if (num == 2 || num == 3) {
cout << num << " ";
}
if (num % 2 == 0 || num % 3 == 0) {
continue;
}
else {
cout << num << " ";
}
}
cout << endl;
}
else if (choice == 'c' || choice == 'C') {
int num;
cout << " Enter a number that you want to check : \n ";
cin >> num;
bool isPrime = true;
if (num == 2 || num == 3) {
isPrime = true;
}
else if (num == 1 || num == 0) {
isPrime = false;
}
else {
for (int i = 2; i <= num; i++) {
if (num % i == 0)
{
isPrime = false;
break
}
}
}
if (isPrime) {
cout << num << " It is a prime number.\n";
}
else if (isPrime == false) {
cout << num << " It is not a prime number.\n";
}
}
else {
cout << "Invalid Input!";
}
system("pause");
return 0;
