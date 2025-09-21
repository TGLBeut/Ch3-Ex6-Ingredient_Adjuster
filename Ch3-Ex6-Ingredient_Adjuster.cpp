/* File Name: Ch3-Ex6-Ingredient_Adjuster.cpp
Programmer : Sean G
Requirements :

A cookie recipe calls for the following ingredients:

· 1.5 cups of sugar

· 1 cup of butter

. 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the
user how many cookies he or she wants to make, then displays the number of cups of each
ingredient needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;
double sugar, butter, flour, desired_cookies;


int main()
{
    double sugar = 1.5;
    double butter = 1;
    double flour = 2.75;
	double cookies = 48;

	cout << "How many cookies do you want to make? ";
	cin >> desired_cookies;

	cout << "To make " << desired_cookies << " cookies, you will need: " << endl;
	cout << (sugar * desired_cookies) / cookies << " cups of sugar" << endl;
	cout << (butter * desired_cookies) / cookies << " cups of butter" << endl;
	cout << (flour * desired_cookies) / cookies << " cups of flour" << endl;
}


