#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;
void total(int x);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	string first_name;
	string friend_name;
	string friend_sex;
	string your_name;
	int age;
	string phrase1 =  "� ���� ��� ������.� ������.";

	
	cout << "����� ��� �������� ";
	cin >> first_name;
	cout << "������� ������� ��������: ";
	cin >> age;
	if (age <= 0 || age >= 110) cout << "�� ������!";
	cout << "������� ��� ��������: ";
	cin >> friend_name;
	cout << "E��� ��� ���� - �������, ������� w, ����� - m: ";
	cin >> friend_sex;
	cout << "���� ���: ";
	cin >> your_name;
	string phrase2 = "�� �� ������ ������� " + friend_name + "?";
	string phrase_w = "���� �������, ������� � ��������� ���.";
	string phrase_m = "E��� �������, ������� ��� ��������� ���.";
	string phrase_age = "� ������, �� ������ ��� ������� ���� ���� �������� � ���� ������������ ";
	cout << "�������," << first_name << "\n" << phrase1 << phrase2 ;
	if (friend_sex == "w") cout << phrase_w;
	else cout << phrase_m;
	
	cout << phrase_age << age << " ���.";
	if (age < 12) cout << "�� ��������� ��� ���� ���������� " << age + 1 << " ���.";
	else if (age == 18) cout << "�� ��������� ��� �� ������� ����������.";
	else if (age > 60) cout << "� �������, �� �� �������� �� ������.";
	cout << "�������� ����, " << your_name;
	
	
	 return 0;
}





