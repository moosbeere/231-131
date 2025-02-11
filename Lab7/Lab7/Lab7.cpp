// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
#include <regex>
using namespace std;

void print(string str);
void print(bool b);
bool haveLink(string str);
bool isValidEmail(string mail);

int main()
{
	setlocale(LC_ALL, "Russian");
	string s1 = "немного поспамлю свой сайт https//:my_site.polytech.ru, хахах!";
	string s2 = "хороша€ стать€ про http и домены .ru, но эта даже лучше получилась";
	cout << "s1: " << haveLink(s1) << endl;
	cout << "s2: " << haveLink(s2) << endl;

	string mail1 = "moosbeere_OOOO@mail.ru";
	string mail2 = "joj@";

	if (isValidEmail(mail1)) {
		cout << "Email is valid" << endl;
	}else cout << "Email is invalid" << endl;

	string dig = "¬чера нашел 50 р, а сегодн€ 3333р \\";
	regex reg("\\\\");
	cout << regex_replace(dig, reg, "abc") << endl;

	string text = "Ќабрал 97 баллов из 100, что мало, однако, лучше, чем 90 баллов.";
	regex reg1("(\\d+)");
	smatch matches;
	regex_match(text, matches, reg1);
		cout << matches[0] << endl;
		cout << matches[1] << endl;
		//text = matches.suffix().str();
		cout << text << endl;
	




	
	//f.open("a.txt", ios::out);
	//f << "chars";
	//f.close();

	//f.open("a.txt", ios::in);
	//string str;
	//string data;
	//while (getline(f, line)) {
	//	data += line + "\n";
	//}
	//f >> str;
	//cout << str << endl;
	//f.close();
	//cout << data << endl;


	/*cout << "MIN "<< min(3, 10) << endl;
	cout << "MAX " << max(3, 10) << endl;
	cout << "ROUND " << round(4.467) << endl;
	cout << "FLOOR " << floor(4.467) << endl;
	cout << "CEIL " << ceil(4.467) << endl;
	cout << "TRUNC " << trunc(4.467) << endl;
	cout << "sqrt " << sqrt(4) << endl;*/

	double d = 5.12345;
	double rd = trunc(d * 1000) / 1000;
	/*cout << "rd " << rd << endl;
	cout << "abs " << abs(-4) << endl;
	cout << "sin " << sin(0.5) << endl;
	cout << "cos " << cos(0.5) << endl;
	cout << "tan " << tan(0.5) << endl;
	cout << "1/tan " << 1 / tan(0.5) << endl;
	cout << "M_PI " << M_PI << endl;
	cout << "M_E " << M_E << endl;
	cout << "sin(30) " << sin(30 * M_PI / 180) << endl;
	cout << "cos(60) " << cos(60 * M_PI/180) << endl;*/


	//string
	//string s1 = "My string";
	//string s2("construct");
	//string s3(3, 'c');
	/*print(s1);
	print(s2);
	print(s3);*/

	//string s4 = s1 + s2 + s3;
	//print(s4);
	//int size = s4.size();
	//print(to_string(size));

	//string s5 = "aa";
	//string s6 = "";
	/*print(s5 != s6);
	print(s6.empty());
	print(to_string(s1.find("str")));
	print(to_string(s1.rfind("ing")));
	print(s1.substr(3, 3));*/
}

void print(string str) {
	cout << str << endl;
}

void print(bool b) {
	cout << b << endl;
}

bool haveLink(string str) {
	regex reg("https?//:.+(\.[a-z]{2,})+");
	return regex_search(str, reg);
}

bool isValidEmail(string mail) {
	regex reg("^[a-z_]+[0-9]*@[a-z]+\.[a-z]{2,}$", regex_constants::icase);
	return regex_search(mail, reg);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
