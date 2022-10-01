#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void intsWithTwoSameDigits() { //Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры
	int counter = 0;
	for (int i = 100; i < 1000; i++) {
		int a, b, c;
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if ((a == b) || (b == c) || (a == c)) {
			counter++;
			//cout << i << " ";
		}
	}
	cout << "Task 2. There are " << counter << " numbers." << endl;
}

void intsWithDifferentDigits() { // Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные
	int counter = 0;
	for (int i = 100; i < 1000; i++) {
		int a, b, c;
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if ((a != b) && (b != c) && (a != c)) {
			counter++;
			//cout << i << " ";
		}
	}
	cout << "Task 3. There are " << counter << " numbers." << endl;
}

void intWithout3and6() { // Пользователь вводит любое целое число. Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.
	int input;
	cout << "Enter a number to transform: ";
	cin >> input;
	int transformed = 0;
	bool a = false;
	bool b = true;
	for (int k = 1; input > 0; k *= 10) {
		int check = input % 10;
		if ((check != 3) && (check != 6)) {
			transformed += check * k;
		}
		else {
			a == false ? b = true : k /= 10;
		}
		cout << "transformed: " << transformed << endl;
		input /= 10;
		cout << "new j = " << input << endl;
		a = true;
	}
	if (b == true) {
		transformed /= 10;
	}
	cout << "result = " << transformed;
}

void aDividedBySqrB() { // Пользователь вводит любое целое число А. Необходимо вывести все целые числа В, для которых А делится без остатка на В*В и не делится без остатка на В*В*В
	int a;
	cout << "Enter a number: ";
	cin >> a;

	for (int b = 1; b < a; b++) {
		if ((a % (b * b) == 0) && (a % (b * b * b) != 0)) {
			cout << b << endl;
		}
	}
}

void denominatorFor1int() { // Пользователь вводит целое число. Необходимо вывести все целые числа, на которое заданное число делится без остатка.
	int a;
	cout << "Enter a number: ";
	cin >> a;

	for (int b = 1; b <= a; b++) {
		if (a % b == 0) {
			cout << b << endl;
		}
	}
}

void denominatorFor2ints() { // Пользователь вводит два целых числа. Необходимо вывести все целые числа, на которые оба введенных числа делятся без остатка.
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;

	for (int c = 1; c <= a; c++) {
		if ((a % c == 0) && (b % c == 0)) {
			cout << c << endl;
		}
	}
}

void numberAnalysis() { // Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое. Определить количество нулей в этом числе. Общение с пользователем организовать через меню.
	cout << "Enter a number to analyze: ";
	int number;
	cin >> number;

	int amountOfDigits = 0;
	double sumOfDigits = 0;
	int amountOfZeros = 0;

	while (number != 0) {
		amountOfDigits += 1;
		sumOfDigits += number % 10;
		if (number % 10 == 0) {
			amountOfZeros += 1;
		}
		number = number / 10;

		/*cout << "number = " << number << endl
		<< "amount of digits = " << amountOfDigits << endl
		<< "sum of digits = " << sumOfDigits << endl
		<< "amount of zeros = " << amountOfZeros << endl << endl;*/
	}
	bool flag = true;
	cout << "Choose a number to get the information or press 0 to escape:" << endl
		<< "1. Amount of digits" << endl
		<< "2. Sum of digits" << endl
		<< "3. Amount of zeros" << endl
		<< "4. Arithmetical mean" << endl;
	while (flag) {
		int answer;
		cin >> answer;
		switch (answer)
		{
		case 0:
			flag = false;
			break;

		case 1:
			cout << "There are " << amountOfDigits << " digits." << endl << endl;
			break;

		case 2:
			cout << "The sum of digits is " << sumOfDigits << endl << endl;
			break;

		case 3:
			cout << "There are " << amountOfZeros << " zeros." << endl << endl;
			break;

		case 4:
			cout << "Arithmetical mean of your number is " << sumOfDigits / amountOfDigits << endl << endl;
			break;

		default:
			cout << "Error: Incorrect input. Please, try again." << endl << endl << endl;
		}
	}



}

void chess() {
	/*Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки. Например,
	***---***---***---***---
	***---***---***---***---
	***---***---***---***---
	---***---***---***---***
	---***---***---***---***
	---***---***---***---***/
	int x, y;
	cout << "Choose a size of a square: ";
	cin >> y;
	x = y + 2;
	bool myswitch = true;
	for (int a = 0; a < 4; a++) {
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < 4; j++) {
				for (int k = 0; k < x; k++) {
					myswitch == true ? cout << "%" : cout << " ";
				}
				for (int l = 0; l < x; l++) {
					myswitch == true ? cout << " " : cout << "%";
				}
			}
			cout << endl;
		}
		myswitch = !myswitch;
	}
}

void minAndMax() { // В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.
	srand(time(NULL));
	int ints[10];
	int min = 99;
	int max = -99;
	cout << "Generated array:\n{ ";
	for (int i = 0; i < 10; i++) {
		ints[i] = rand() % 100;
		if (ints[i] > max) {
			max = ints[i];
		}
		if (ints[i] < min) {
			min = ints[i];
		}
		cout << ints[i] << " ";
	}
	cout << "}" << endl
		<< "The smallest number is " << min << endl
		<< "The biggest number is " << max << endl;
}


int main() {
	//intsWithTwoSameDigits();
	//intsWithDifferentDigits();
	//intWithout3and6();
	//aDividedBySqrB();
	//denominatorFor1int();
	//denominatorFor2ints();
	//numberAnalysis();
	//chess();
	//minAndMax();
}

/*
Задание 2: Пользователь вводит прибыль фирмы за год (12 месяцев). Затем пользователь
вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем). Необходимо определить
месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с
учетом выбранного диапазона.

Задание 3: В одномерном массиве, состоящем из N вещественных чисел вычислить:
• Сумму отрицательных элементов.
• Произведение элементов, находящихся между min и max элементами.
• Произведение элементов с четными номерами.
• Сумму элементов, находящихся между первым и последним отрицательными
элементами.

Задание 4:
Написать программу, копирующую последовательно элементы одного массива размером 10
элементов в 2 массива размером 5 элементов каждый.

Задание 5:
Напишите программу, которая выполняет поэлементную сумму двух массивов и результат
заносит в третий массив.*/
