﻿#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include <locale.h>
using namespace std;

class TKM {
	int bilgisayar;
	int bilgisayarp;
	int benp; 


public:
	TKM() {
		setlocale(LC_ALL, "Turkish");
		bilgisayarp = 0;
		benp = 0;
	}
	bool oyun(int ben) {
		bilgisayar = 1 + rand() % 3;
		if (bilgisayar == 1 && ben == 1) {
			cout << "Taş Ve Taş , Berabere" << endl;

		}
		else if (bilgisayar == 2 && ben == 2) {
			cout << "Kağıt Ve Kağıt , Berabere. " << endl;
		}
		else if (bilgisayar == 3 && ben == 3) {
			cout << "Makas Ve Makas, Berabere." << endl;
		}
		else if (bilgisayar == 1 && ben == 2) {
			benp += 1;
			cout << "Kağıt Taşı Sarar , Kazandınız." << endl;
			cout << "Bilgisayar :" << bilgisayarp << endl;
			cout << "Sen :" << benp << endl;
		}
		else if (ben == 2 && bilgisayar == 1) {
			benp += 1;
			cout << "Kağıt Taşı Sarar , Kazandınız." << endl;
			cout << "Bilgisayar :" << bilgisayarp << endl;
			cout << "Sen : " << benp << endl;
		}
		else if (ben == 3 && bilgisayar == 1) {
			bilgisayarp += 1;
			cout << "Taş Makası Kırar , Kaybettin." << endl;
			cout << "Bilgisayar : " << bilgisayarp << endl;
			cout << "Sen : " << benp << endl;
		}
		else if (bilgisayar == 3 && ben == 1) {
			benp += 1;
			cout << "Taş Makası Kırar , Kazandınız." << endl;
			cout << "Bilgisayar :" << bilgisayarp << endl;
			cout << "Sen :" << benp << endl;
		}
		else if (bilgisayar == 3 && ben == 2) {
			bilgisayarp += 1;
			cout << "Makas Kağıtı Keser , Kaybettiniz." << endl;
			cout << "Bilgisayar :" << bilgisayarp <<endl;
			cout << "Sen :" << benp << endl;
		}
		else if (ben == 3 && bilgisayar == 2) {
			benp += 1;
			cout << "Makas Kağıtı Keser , Kazandınız." << endl;
			cout << "Bilgisayar :" << bilgisayarp << endl;
			cout << "Sen :" << benp << endl;
		}
		if (benp == 3) {
			cout << "Siz Kazandınız!" << endl;
			return true;
		}
		else if (bilgisayarp == 3) {
			cout << "Bilgisayar Kazandı!" << endl;
			return true;
		}
		return false;
	}
	bool isThereWinner() {

	}
};

int main() {
	setlocale(LC_ALL, "Turkish");

	cout << "Hoş Geldiniz" << endl;

			int ben;
			bool sonuc = false;
			TKM Oyun;
			TKM *deneme = &Oyun;
				 
			while (sonuc != true) {

				cout << "1 ) Taş" << endl;
				cout << "2 ) Kağıt" << endl;
				cout << "3 ) Makas" << endl;
				cin >> ben;
				sonuc = deneme -> oyun(ben);
			}
	return 0;
}