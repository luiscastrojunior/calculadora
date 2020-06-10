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
		cout << "Digite o 1º número: "; cin >> num1;
		cout << "(+) Adição" << endl;
		cout << "(-) Subtração" << endl;
		cout << "(*) Multiplicação" << endl;
		cout << "(/) Divisão" << endl;
		cout << "(^) Exponenciação (Potência)" << endl;
		cout << "Digite a operação matemática que deseja fazer: ";
		cin >> operacao;
		cout << "Digite o 2º número: ";
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
					else cout << "Operação Inválida";
					break;
				case '^': {cout << num1; cout << " ^ "; cout << num2; cout << " = ";  cout << exponenciacao (num1, num2); cout << endl;}
					break;
				default: cout << "Operaçao inválida!!";}
	}
}
