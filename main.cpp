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
	string phrase1 =  "У меня все хорошо.Я здоров.";

	
	cout << "Введи имя адресата ";
	cin >> first_name;
	cout << "Введите возраст адресата: ";
	cin >> age;
	if (age <= 0 || age >= 110) cout << "Ты шутишь!";
	cout << "Введите имя приятеля: ";
	cin >> friend_name;
	cout << "Eсли ваш друг - девушка, введите w, иначе - m: ";
	cin >> friend_sex;
	cout << "Ваше имя: ";
	cin >> your_name;
	string phrase2 = "Ты не видела недавно " + friend_name + "?";
	string phrase_w = "Если увидишь, попроси её позвонить мне.";
	string phrase_m = "Eсли увидишь, попроси его позвонить мне.";
	string phrase_age = "Я слышал, ты только что отметил свой день рождения и тебе испольнилось ";
	cout << "Дорогая," << first_name << "\n" << phrase1 << phrase2 ;
	if (friend_sex == "w") cout << phrase_w;
	else cout << phrase_m;
	
	cout << phrase_age << age << " лет.";
	if (age < 12) cout << "На следующий год тебе исполнится " << age + 1 << " лет.";
	else if (age == 18) cout << "На следующий год ты сможешь голосовать.";
	else if (age > 60) cout << "Я надеюсь, ты не скучаешь на пенсии.";
	cout << "Искренне твой, " << your_name;
	
	
	 return 0;
}





