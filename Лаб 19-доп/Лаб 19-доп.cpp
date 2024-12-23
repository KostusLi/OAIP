#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//16

	//1
	FILE* fileA = fopen("fileA.txt", "r");
	int arrayA[100], k=0;

	if (!fileA) {
		cout << "Ошибка: файл fileA.txt не удалось открыть." << endl;
		return 1;
	}

	for (int i = 0; i < 100; i++)
	{

		fscanf(fileA, "%d", &arrayA[i]);

		if (arrayA[i]<0)
		{
			k = i - 1;
			break;
		}
		else 
		{
			cout << arrayA[i] << "\t";
		}
	}
	cout << endl;

	fclose(fileA);

	FILE* fileB = fopen("fileB.txt", "r");
	int arrayB[100], m = 0;

	if (!fileB) {
		cout << "Ошибка: файл fileA.txt не удалось открыть." << endl;
		return 1;
	}

	for (int i = 0; i < 100; i++)
	{

		fscanf(fileB, "%d", &arrayB[i]);

		if (arrayB[i] < 0)
		{
			m = i - 1;
			break;
		}
		else
		{
			cout << arrayB[i] << "\t";
		}
	}
	cout << endl;

	fclose(fileB);

	FILE* fileC = fopen("fileC.txt", "w");

	int arrayC[100], dif=0, sumCount=0, max;
	
	if (m<k)
	{
		sumCount = m;
		max = k;
	}
	else {
		sumCount = k;
		max = m;
	}

	for (int i = 0; i <= sumCount; i++)
	{
		arrayC[i] = arrayA[i] + arrayB[i];
		fprintf(fileC, "%d", arrayC[i]);
		fputs("\t", fileC);
		cout << arrayC[i] << "\t";
	}

	for (sumCount=sumCount+1; sumCount<=max; sumCount++)
	{
		if (max == m)
		{
			fprintf(fileC, "%d", arrayB[sumCount]);
			fputs("\t", fileC);
			cout << arrayB[sumCount] << "\t";
		}

		if (max == k)
		{
			fprintf(fileC, "%d", arrayA[sumCount]);
			fputs("\t", fileC);
			cout << arrayA[sumCount] << "\t";
		}
		fclose(fileC);
	}


	//2
//FILE* file1 = fopen("file1.txt", "r");
//
//int array[200];
//int count = 0;
//
//while (fscanf(file1, "%d", &array[count]) == 1) {
//	count++;
//}
//
//fclose(file1);
//
//int positive[200], negative[200];
//int posCount = 0, negCount = 0;
//
//for (int i = 0; i < count; i++) {
//	if (array[i] > 0) {
//		positive[posCount++] = array[i];
//	}
//	else if (array[i] < 0) {
//		negative[negCount++] = array[i];
//	}
//}
//
//FILE* file2 = fopen("file2.txt", "w");
//
//int posIndex = 0, negIndex = 0;
//
//while (posIndex < posCount || negIndex < negCount) {
//	for (int i = 0; i < 10 && posIndex < posCount; i++) {
//		fprintf(file2, "%d ", positive[posIndex]);
//		cout << positive[posIndex] << " ";
//		posIndex++;
//	}
//
//	for (int i = 0; i < 10 && negIndex < negCount; i++) {
//		fprintf(file2, "%d ", negative[negIndex]);
//		cout << negative[negIndex] << " ";
//		negIndex++;
//	}
//}
//
//fclose(file2);

	//2

	//1
	/*int colsA, rowsA, countA;

	FILE* fA = fopen("fA.txt", "r");

	if (!fA) {
		printf("Ошибка: не удалось открыть файл %s\n", "newfile.txt");
		return 1;
	}

	fscanf(fA, "%d", &colsA);
	rowsA = colsA;
	cout << rowsA << endl;
	cout << colsA << endl;
	cout << endl;

	int** arrayA = new int* [rowsA];
	for (int i = 0; i < rowsA; i++)
	{
		arrayA[i] = new int[colsA];
	}

	for (int i = 0; i < rowsA; i++)
	{
		for (int j = 0; j < colsA; j++)
		{
			fscanf(fA, "%d", &arrayA[i][j]);
			cout << arrayA[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	fclose(fA);

	int colsB, rowsB, countB;

	FILE* fB = fopen("fB.txt", "r");

	if (!fB) {
		printf("Ошибка: не удалось открыть файл %s\n", "newfile.txt");
		return 1;
	}

	fscanf(fB, "%d", &colsB);
	rowsB = colsB;
	cout << rowsB << endl;
	cout << colsB << endl;
	cout << endl;

	int** arrayB = new int* [rowsB];
	for (int i = 0; i < rowsB; i++)
	{
		arrayB[i] = new int[colsB];
	}

	for (int i = 0; i < rowsB; i++)
	{
		for (int j = 0; j < colsB; j++)
		{
			fscanf(fB, "%d", &arrayB[i][j]);
			cout << arrayB[i][j] << "\t";
		}
		cout << endl;
	}
	fclose(fB);

	cout << endl;

	int colsC=colsB, rowsC=rowsB;

	FILE* fC = fopen("fC.txt", "w");

	int** arrayC = new int* [rowsC];
	for (int i = 0; i < rowsC; i++)
	{
		arrayC[i] = new int[colsC];
	}

	if (!fC) {
		printf("Ошибка: не удалось открыть файл %s\n", "newfile.txt");
		return 1;
	}

	for (int i = 0; i < rowsB; i++)
	{
		for (int j = 0; j < colsB; j++)
		{
			arrayC[i][j] = arrayB[i][j] + arrayA[i][j];
			fprintf(fC, "%d", arrayC[i][j]);
			fputs("\t", fC);
			cout << arrayC[i][j] << "\t";
		}
		fputs("\n", fC);
		cout << endl;
	}
	fclose(fC);*/


	//2
//FILE* f = fopen("f.txt", "r");
//int array[100], k = 0;
//
//if (!f) {
//	cout << "Ошибка: файл f.txt не удалось открыть." << endl;
//	return 1;
//}
//
//for (int i = 0; i < 100; i++)
//{
//
//	fscanf(f, "%d", &array[i]);
//
//	if (array[i] < -100)
//	{
//		k = i - 1;
//		break;
//	}
//	else
//	{
//		cout << array[i] << "  ";
//	}
//}
//cout << endl;
//
//fclose(f);
//
//FILE* g = fopen("g.txt", "w");
//
//int count = 0, positive[100], negative[100];
//
//int cPos = 0, cNeg = 0;
//
//for (int i = 0; i < k; i++) {
//	if (array[i] > 0) {
//		positive[cPos++] = array[i];
//	}
//	else if (array[i] < 0) {
//		negative[cNeg++] = array[i];
//	}
//}
//	int posIndex = 0, negIndex = 0;
//
//	while (posIndex < cPos || negIndex < cNeg) {
//		for (int i = 0; i < 5 && posIndex < cPos; i++) {
//			fprintf(g, "%d ", positive[posIndex]);
//			cout << positive[posIndex] << " ";
//			posIndex++;
//		}
//
//		for (int i = 0; i < 5 && negIndex < cNeg; i++) {
//			fprintf(g, "%d ", negative[negIndex]);
//			cout << negative[negIndex] << " ";
//			negIndex++;
//		}
//	}
//
//	fclose(g);



	//4

	//1
//FILE* f = fopen("file1A.txt", "r");
//
//int array[255];
//int k = 0;
//for (int i = 0; i < 200; i++)
//{
//	fscanf(f, "%d", &array[i]);
//	if (array[i] < -300)
//	{
//		k = i - 1;
//		break;
//	}
//	cout << array[i] << "\t";
//}
//cout << endl;
//fclose(f);
//
//
//FILE* f1 = fopen("file1B.txt", "w");
//
//for (int i=0; i<=k; i++)
//{
//	if (array[i]>0)
//	{
//		fprintf(f1, "%d", array[i]);
//		fputs("\t", f1);
//		cout << array[i] << " ";
//	}
//}
//
//fclose(f1);



//2
//FILE* f = fopen("f1.txt", "r");
//
//int array[255];
//int k = 0;
//for (int i = 0; i < 200; i++)
//{
//	fscanf(f, "%d", &array[i]);
//	if (array[i] < -300)
//	{
//		k = i - 1;
//		break;
//	}
//	cout << array[i] << "\t";
//}
//cout << endl;
//fclose(f);
//int n;
//cout << "Введите число n: ";
//cin >> n;
//
//
//FILE* f1 = fopen("g1.txt", "w");
//
//for (int i=0; i<=k; i++)
//{
//	if (array[i]>n)
//	{
//		fprintf(f1, "%d", array[i]);
//		fputs("\t", f1);
//		cout << array[i] << " ";
//	}
//}
//
//fclose(f1);



	return 0;
}