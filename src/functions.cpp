#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "fstream"
#include <string>
#include <math.h>
#include <algorithm>
#include <windows.h>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <locale.h>
using namespace std;

void ramka(){//������� �������� �����
	setlocale(0,"");
	point2.X = 0;//���������� ���������� x � � ���� ��������� ������ � �������
	point2.Y = 9;
	SetConsoleCursorPosition(hout, point2);//��������� ������
	for (int i = 1; i <= 80; ++i){//������ ������� �����
		printf("%c", '_');
	}
	point2.Y = 20;
	SetConsoleCursorPosition(hout, point2);//��������� ������
	for (int i = 1; i <= 80; ++i){//������ ������ �����
		printf("%c", '_');
	}
}

int modul(int x){//������� ������
	if (x < 0)
		return -x;
	return x;
}
void result(int anserr){//��������� ���������
	if (anserr>17) cout << "Train more!";
	else if (anserr > 12) cout << "You can do batter!";
	else if (anserr >= 5) cout << "Not bad!";
	else if (anserr == 4) cout << "Wooden medal!";
	else if (anserr == 3) cout << "Bronze medal!";
	else if (anserr == 2) cout << "Silver medal!";
	else if (anserr == 1) cout << "Gold medal!";
	else if (anserr == 0) cout << "Brilliant!";
}

int result_for_tests(int anserr){//��������� ���������
	if (anserr>17) return 1;
	else if (anserr > 12) return 2;
	else if (anserr >= 5) return 3;
	else if (anserr == 4) return 4;
	else if (anserr == 3) return 5;
	else if (anserr == 2) return 6;
	else if (anserr == 1) return 7;
	else if (anserr == 0) return 8;
}
