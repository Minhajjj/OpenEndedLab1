#include<iostream>
using namespace std;
int main()
{
int days,days_allowed , fine = 1;
int total_fine;
string Selection;
cout << " GREETINGS!....\n";
cout << " Do You Want To Borrow Or Return A Book: ";
cin >> Selection;
if (Selection == "borrow")
{
cout << " Thanks for borrowing a book from us :\n\n";
cout << " ! IMPORTANT ! \n";
cout << " 1. You have to return the book in 4 days :\n";
cout << " 2. The fine of late submission for 1 day is $1 :";
}
else if (Selection == "return")
{
cout << "How Many days have been you borrowed this book? \n";
cin >> days;
days_allowed = 4;
if (days > 4)
{
total_fine = days - days_allowed;
days = days * fine;
cout << "you're fine is $" << total_fine<<"\n\n";
cout << "your fine for late submission is $" << total_fine;
}
else
{
cout<<" YOU HAVE NO FINE TO PAY!:";
}
}
return 0;
}