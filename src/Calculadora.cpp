/*
 * teste.cpp
 *
 *  Created on: 9 de jun de 2020
 *      Author: Jr_Castro
 */
#include <iostream>
#include <math.h>
using namespace std;

double soma (double numa, double numb) {
	return numa + numb;
}

double subtracao (double numa, double numb) {
	return numa - numb;
}

double multiplicacao (double numa, double numb) {
	return numa * numb;
}

double divisao (double numa, double numb) {
	return numa / numb;
}

double exponenciacao (double numa, double numb) {
	return pow(numa, numb);
}

int main() {
	double num1, num2;
	char operacao;
	while (true) {
		num1 = 0;
		num2 = 0;
		cout << "Calculadora" << endl;
		cout << "Digite o 1� n�mero: "; cin >> num1;
		cout << "(+) Adi��o" << endl;
		cout << "(-) Subtra��o" << endl;
		cout << "(*) Multiplica��o" << endl;
		cout << "(/) Divis�o" << endl;
		cout << "(^) Exponencia��o (Pot�ncia)" << endl;
		cout << "Digite a opera��o matem�tica que deseja fazer: ";
		cin >> operacao;
		cout << "Digite o 2� n�mero: ";
		cin >> num2;
		switch (operacao) {
				case '+': {cout << num1; cout << " + "; cout << num2; cout << " = ";  cout << soma(num1, num2); cout << endl;}
					break;
				case '-': {cout << num1; cout << " - "; cout << num2; cout << " = ";  cout << subtracao (num1, num2); cout << endl;}
					break;
				case '*': {cout << num1; cout << " * "; cout << num2; cout << " = ";  cout << multiplicacao (num1, num2); cout << endl;}
					break;
				case '/':
					if (num2 != 0) {cout << num1; cout << " / "; cout << num2; cout << " = ";  cout << divisao (num1, num2); cout << endl;}
					else cout << "Opera��o Inv�lida";
					break;
				case '^': {cout << num1; cout << " ^ "; cout << num2; cout << " = ";  cout << exponenciacao (num1, num2); cout << endl;}
					break;
				default: cout << "Opera�ao inv�lida!!";}
	}
}
