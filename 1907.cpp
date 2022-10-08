// КАЖДАЯ ФУНКЦИЯ В ЭТОЙ ПРОГРАММЕ СОДЕРЖИТ РЕШЕНИЕ ОДНОЙ ЗАДАЧИ ИЗ ДОМАШНЕГО ЗАДАНИЯ

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int INT_ARRAY_SIZE = 10;

// П Р О Т О Т И П Ы   Ф У Н К Ц И Й
void intsWithTwoSameDigits();
void intsWithDifferentDigits();
void intWithout3and6();
void aDividedBySqrB();
void denominatorFor1int();
void denominatorFor2ints();
void numberAnalysis();
void chess();
void minAndMax();
void income();
void arrayAnalysis();
void splitArray();
void sumArrays();
void figure1();
void figure2();
void figure3();
void figure4();
void figure5();
void figure6();
void figure7();
void figure8();
void figure9();
void figure10();


int main(){
	srand(time(NULL));
	//Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры
	//intsWithTwoSameDigits(); 
	
	// Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные
	//intsWithDifferentDigits(); 
	
	// Пользователь вводит любое целое число. Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.
	//intWithout3and6(); 
	
	// Пользователь вводит любое целое число А. Необходимо вывести все целые числа В, для которых А делится без остатка на В*В и не делится без остатка на В*В*В
	//aDividedBySqrB();

	// Пользователь вводит целое число. Необходимо вывести все целые числа, на которое заданное число делится без остатка.
	//denominatorFor1int();

	// Пользователь вводит два целых числа. Необходимо вывести все целые числа, на которые оба введенных числа делятся без остатка.
	//denominatorFor2ints();

	// Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое. Определить количество нулей в этом числе. Общение с пользователем организовать через меню.
	//numberAnalysis();

	/*Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки. Например,
	***---***---***---***---
	***---***---***---***---
	***---***---***---***---
	---***---***---***---***
	---***---***---***---***
	---***---***---***---***/
	//chess();
	
	// В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.
	//minAndMax();
	
	//Пользователь вводит прибыль фирмы за год (12 месяцев). Затем пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем). Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона.
	//income();
	
	/*В одномерном массиве, состоящем из N вещественных чисел вычислить:
- Сумму отрицательных элементов.
• Произведение элементов, находящихся между min и max элементами.
- Произведение элементов с четными номерами.
- Сумму элементов, находящихся между первым и последним отрицательными
элементами.*/
	//arrayAnalysis();
	
	
	//Написать программу, копирующую последовательно элементы одного массива размером 10 элементов в 2 массива размером 5 элементов каждый.
	//splitArray();
	
	//Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив.
	//sumArrays();
	
	// ФИГУРЫ: 
	//figure1();
	//figure2();
	//figure3();
	//figure4();
	//figure5();
	//figure6();
	//figure7();
	//figure8();
	//figure9();
	//figure10();
}

// Ф У Н К Ц И И
void intsWithTwoSameDigits() {
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

void intsWithDifferentDigits() { 
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

void intWithout3and6() {
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

void aDividedBySqrB() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int b = 1; b < a; b++) {
        if ((a % (b * b) == 0) && (a % (b * b * b) != 0)) {
            cout << b << endl;
        }
    }
}

void denominatorFor1int() { 
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int b = 1; b <= a; b++) {
        if (a % b == 0) {
            cout << b << endl;
        }
    }
}

void denominatorFor2ints() {
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

void numberAnalysis(){
	cout << "Enter a number to analyze: ";
	int number;
	cin >> number;

	int amountOfDigits = 0;
	double sumOfDigits = 0;
	int amountOfZeros = 0;

	while (number != 0){
		amountOfDigits +=1;
		sumOfDigits += number % 10;
		if (number % 10 == 0){
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
	while (flag){
		int answer;
		cin >> answer;
		switch (answer)
			{
				case 0:
				flag = false;
				break;
				
				case 1:
				cout << "There are " << amountOfDigits << " digits."<< endl << endl;
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

void chess(){
	int x, y;
	cout << "Choose a size of a square: ";
	cin >> y;
	x = y + 2;
	bool myswitch = true;
	for (int a = 0; a < 4; a++){
		for (int i = 0; i < y; i++){
			for (int j = 0; j < 4; j++){
				for (int k = 0; k < x; k++){
					myswitch == true? cout << "%" : cout << " ";
				}
			for (int l = 0; l < x; l++){
					myswitch == true? cout << " " : cout << "%";
				}
			}
			cout << endl;
		}
		myswitch = !myswitch;
	}
}

void minAndMax(){ 
	int ints[INT_ARRAY_SIZE];
	int min = 99;
	int max = -99;
	cout << "Generated array:\n{ ";
	for (int i = 0; i < 10; i++){
		ints[i] = rand() % 100;
		if (ints[i] > max){
			max = ints[i];
		}
		if (ints[i] < min){
			min = ints[i];
		}
		cout << ints[i] << " ";
	}
	cout << "}" << endl
		<< "The smallest number is " << min << endl
		<< "The biggest number is " << max << endl;
}

void income(){ 
	double income[12];
	int month1, month2;
	cout << "Enter income of your company:" << endl;
	for (int i = 0; i < 12; i++){
		cout << "Income in month " << i+1 << ": ";
		cin >> income[i];
	}
	while (true)
	{
		cout << endl << "Choose a range of months to analyze" << endl;

		cout << "Enter the number of the first month: ";
		cin >> month1;
		cout << "Enter the number of the second month: ";
		cin >> month2;
		if((month1 > 12) || (month2 > 12) || (month1 < 1) || (month2 < 1)){
			cout << "Error: Incorrect input" << endl << endl;
			continue;
		}
		month1 -= 1;
		month2 -= 1;
		break;
	}
	int min = 2147483646;
	int max = 0;
	int minmonth, maxmonth;
	
	for (int i = month1; i <= month2; i++){
		if (income[i] > max){
			max = income[i];
			maxmonth = i + 1;
		}
		if (income[i] < min){
			min = income[i];
			minmonth = i + 1;
		}
	}
	cout << "Minimal income: " << min << " (month " << minmonth << ").\n";
	cout << "Maximal income: " << max << " (month " << maxmonth << ").\n";
	
}

void arrayAnalysis(){ 
	int array[INT_ARRAY_SIZE] = { 10, 1, -2, 3, -4, 5, 6, 7, 8, -9 };
	/*int array[INT_ARRAY_SIZE];
	cout << "Enter " << INT_ARRAY_SIZE << " values to your array one by one:\n";
	for (int i = 0; i < INT_ARRAY_SIZE; i++){
		cout << "Element " << i+1 << " = ";
		cin >> array[i];
	}*/
	int sumOfNegatives = 0, minNum = 0, maxNum = 0, minIndex = 0, maxIndex = 0, evenMultipl = 1, sumBetweenNegatives = 0, multiplBetweenMinMax = 1, temp = 0;
	bool firstNegativeFlag = false;
	cout << "For array { ";

	for (int i = 0; i < INT_ARRAY_SIZE; i++){
		cout << array[i] << " ";
		if (firstNegativeFlag == true){
			temp += array[i];
		}
		if (array[i] < 0){
			sumOfNegatives += array[i];
			firstNegativeFlag = true;
			sumBetweenNegatives += temp - array[i];
			temp = array[i];
		}
		if (i % 2 == 0){
			evenMultipl *= array[i];
		}
		if (array[i] < minNum){
			minNum = array[i];
			minIndex = i;
		}
		if (array[i] > maxNum){
			maxNum = array[i];
			maxIndex = i;
		}
	}
	if (maxIndex < minIndex){
		temp = minIndex;
		minIndex = maxIndex;
		maxIndex = temp;
	}
	for (int i = minIndex + 1; i < maxIndex; i++){
		multiplBetweenMinMax *= array[i];
	}
	
	cout << "}" << endl
		<< "Sum of negative elements is " << sumOfNegatives << endl
		<< "Product of elements between min and max elements is " << multiplBetweenMinMax << endl
		<< "Product of even elements is " << evenMultipl << endl
		<< "Sum of elements between the first and the last negative elements is " << sumBetweenNegatives << endl;
	
}

void splitArray(){
	int arrayBig[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, arraySmall1[5], arraySmall2[5];
	cout << "First array { ";
	for (int i = 0; i < 10; i++){
		cout << arrayBig[i] << " ";
		i < 5 ? arraySmall1[i] = arrayBig[i] : arraySmall2[i - 5] = arrayBig[i];
	}
	cout << "}" << endl;
	
	cout << "Second array { ";
	for (int i = 0; i < 5; i++){
		cout << arraySmall1[i] << " ";
	}
	cout << "}" << endl;

	cout << "Third array { ";
	for (int i = 0; i < 5; i++){
		cout << arraySmall2[i] << " ";
	}
	cout << "}" << endl;
}

void sumArrays(){ 
	int array1[] = {1, 5, 8, 9, 8, 4, 0}, array2[] = {45, 25, 5, 4, -9, 56, 0}, array3[7];
	for (int i = 0; i < 7; i++){
		array3[i] = array1[i] + array2[i];
	} 
	cout << "Array 1 { ";
	for (int i = 0; i < 7; i++){
		cout << array1[i] << " ";
	}
	cout << "}" << endl;
	
	cout << "Array 2 { ";
	for (int i = 0; i < 7; i++){
		cout << array2[i] << " ";
	}
	cout << "}" << endl;

	cout << "Array 3 { ";
	for (int i = 0; i < 7; i++){
		cout << array3[i] << " ";
	}
	cout << "}" << endl;
	


}

void figure1() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x++ : x += 0;

	for (int lines = 0, space = 0, symbol = x; lines < (x / 2) + 1; lines++, space += 2, symbol -= 2) {
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure2() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x++ : x += 0;

	for (int lines = 0, symbol = 1, space = x; lines < (x / 2) + 1; lines++, symbol += 2, space -= 2) {
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		cout << endl;
	}
}

void figure3(){
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x += 0 : x ++;

	for (int lines = 0, symbol = x, space = 0; lines < (x / 2) + 1; lines++, symbol -= 4, space +=2){
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		
		for (int i = 0; i <= symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure4() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x += 0 : x ++;

	for (int lines = 0; lines < x / 4; lines++) {
		cout << endl;
	}

	for (int lines = 0, spaces = x / 2 - 1, symbol = 1; lines < x / 4; lines++, symbol += 4, spaces -= 2){
		for (int i = 0; i < spaces; i++){
			cout << " ";
		} 
		for (int i = 0; i < symbol; i++){
			cout << "*";
		} 
		cout << endl;
	}
}

void figure5() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x +=0 : x ++;

	for (int lines = 0, symbol = x, space = 0; lines < x / 4 + 1; lines++, symbol -= 4, space +=2){
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		
		for (int i = 0; i <= symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
	for (int lines = 0, space = x / 2 - 2, symbol = 5; lines < x / 4; lines++, symbol += 4, space -= 2){
		for (int i = 0; i < space; i++){
			cout << " ";
		} 
		for (int i = 0; i < symbol; i++){
			cout << "*";
		} 
		cout << endl;
	}
	
}

void figure6() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x -- : x += 0;

	for (int lines = 0, space = x, symbol = 1; lines < x / 4 + 1; lines++, space -= 4, symbol += 2){
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < x / 2 + 1; i++){
		cout << "*";	
	}
	cout << " ";
	for (int i = 0; i < x / 2 + 1; i++){
		cout << "*";	
	}
	cout << endl;
	
	for (int lines = 0, space = 3, symbol = x / 2; lines < x / 4 + 1; lines++, space +=4, symbol -= 2){
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure7() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x -- : x += 0;

	for (int lines = 0, space = x, symbol = 1; lines < x / 4 + 1; lines++, space -= 4, symbol += 2){
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < x / 2 + 2; i++){
		cout << "*";
	}
	cout << endl;
	
	for (int lines = 0, space = 3, symbol = x / 2; lines < x / 4 + 1; lines++, space +=4, symbol -= 2){
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure8() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x -- : x += 0;

	for (int lines = 0, space = x, symbol = 1; lines < x / 4 + 1; lines++, space -= 4, symbol += 2){
		for (int i = 0; i < symbol; i++){
			cout << " ";
		}
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < x / 2 + 1; i++){
		cout << " ";	
	}
	cout << "*";
	for (int i = 0; i < x / 2 + 1; i++){
		cout << "*";	
	}
	cout << endl;
	
	for (int lines = 0, space = 3, symbol = x / 2; lines < x / 4 + 1; lines++, space +=4, symbol -= 2){
		for (int i = 0; i < symbol; i++){
			cout << " ";
		}
		for (int i = 0; i < space; i++){
			cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure9() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x -- : x += 0;

	for (int lines = 0, symbol = x; lines < x / 2 + 1; lines++, symbol -= 2){
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}

void figure10() {
	int x;
	cout << "Set a size of a square: ";
	cin >> x;
	x % 2 == 0 ? x++ : x += 0;
	for (int lines = 0, space = x, symbol = 1; lines < (x / 2) + 1; lines++, space -= 2, symbol += 2) {
		for (int i = 0; i < space; i++){
		cout << " ";
		}
		for (int i = 0; i < symbol; i++){
			cout << "*";
		}
		cout << endl;
	}
}