﻿#include<iostream>;
#include<cstdio>;
#include<math.h>;
using namespace std;
int hc1,hc2,mc1,mc2,h1,m1,h2,m2,x,y;
char c;
int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "Во сколько прибыл первый человек?\n";
	cin >> h1 >> c >> m1;// так как C в отличии от прочих это символ, то остальные будут сортироватся на 2 числа, ввиде часов и минут
	if (c != ':') { cout << "Неверный формат времени"; }//C всегда должен быть двоеточием чтобы был верный формат времени (00:00)
	else {
		if (h1 > 23) { cout << "Неверное количество часов"; }//Чтобы часы не привышали 23, а внизу минуты не привышали 59
		else { if (m1 > 59) { cout << "Неверное количество минут"; } 
		}
	}
	cout << "Во сколько прибыл второй человек?\n";//повторяю все уже с временем прихода второго
	cin >> h2 >> c >> m2;
	if (c != ':') { cout << "Неверный формат времени"; }
	else {
		if (h2 > 23) { cout << "Неверное количество часов"; }
		else {
			if (m2 > 59) { cout << "Неверное количество минут"; }
		}
	}
	hc1 = h2 - h1;//hc = hour check, этим я обозначаю не прошел ли час и больше между приходами двух людей
	mc1 = m2 - m1;//mc = minute check, схоже с предыдущим, я проверяю не прошло ли больше 15 минут
	if (hc1 == 0) { if (mc1 > 15) { cout << "Встреча не состоится"; } else { cout << "Встреча состоится"; } }// тут проводится проверка есть ли разница в больше 15 минут если часы разные
	if (hc1 == 1) {
		x = m1 - m2;
		y = m1 - x;
		if (x == 0) { cout << "Встреча не состоится"; }
		if (y > 15) { cout << "Встреча не состоится";}
		else { cout << "Встреча состоится"; }
	}


}