/*Лабораторная работа по скв №8*/
/*
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int number(int x)
{
   
    int temp = x;
    int digit;

    while (temp > 0)
    {
        digit = temp % 10;

        if (digit == 0 || x % digit != 0)
            return 0;   

        temp /= 10;
    }

    return 1;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;

    printf("Введите n: ");
    scanf_s("%i", &n);

    printf("Подходящие числа:\n");

    for (int i = 1; i <= n; i++)
    {
        if (number(i))
            printf("%d ", i);
    }

    _getch();
}
*/

/*--------------------------*/
/*МАССИВЫ С ФУНКЦИЯМИ*/
/*
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define n 42

void fill(int*, int);
void print(int*, int);
void plusss(int*, int);
void main(void)

{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int mas[n];
    int i;
    int s=0;
    fill(mas, n);
    print(mas, n);
    plusss(mas, n);
    _getch();
}
void fill(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = rand() % 100;
    }
}

void print(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i \t", *(ptr + i));
    }
}

void plusss(int *ptr, int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += *ptr;
    }

    if (s > 999)
        printf("\nДа количество учеников четырехзначное: %i", s);
    else
        printf("\nНет количество учеников не четырехзначное: %i", s);
}
*/

/*
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define n 10

void fill(int*, int);
void print(int*, int);


void main(void)
{

    setlocale(LC_ALL, "rus");

    int mas[n];
    fill(mas, n);
    print(mas, n);
 
    _getch();
}

void fill(int* ptr, int size)
{
    int n1;
    printf("Введите число");
    scanf_s("%i", &n1);
    for (int i = 0; i < size; i++)
    {

        if (n1 - i > 0)
            ptr[i] = n1 - i;
        else
        {
            ptr[i] = 0;

        }
    }
}

void print(int* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i \t", *(ptr + i));
    }
}
*/

/*
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define n 3
#define m 3

void fill(int*, int, int);
void print(int*, int, int);
void sr(int*, int, int);

void main(void)
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int mas[n][m];
    int i, j;
    fill(&mas[0][0], n, m);
    print(&mas[0][0], n, m);
    sr(&mas[0][0], n, m);
    _getch();
}

void fill(int* ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
                *(ptr + i * cols + j) = 1;
            else
                *(ptr + i * cols + j) = 0;
        }
    }
}

void print(int* ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%i \t", *(ptr + i * cols + j));
        }
        printf("\n");
    }
}

void sr(int *ptr, int rows, int cols)
{
    float sum = 0.0;
    int k = 0;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            sum = sum + *(ptr + i * cols + i);
            k++;
        }

    }
    printf("\nСр, ариф глав диагонали:%.3f", sum / k);
}
*/

/*
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define n 7
#define m 7
void fill(int*, int, int);
void print(int*, int, int);
void main(void)
{

    setlocale(LC_ALL, "rus");

    int mas[n][m];
    int i, j;
    fill(&mas[0][0], n, m);
    print(&mas[0][0], n, m);
    _getch();
}
void fill(int* ptr, int rows, int cols)
{
    int start = 0, end = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i <= m / 2)
            {
                start = i;
                end = rows - 1 - i;
            }
            else
            {
                start = rows - 1 - i;
                end = i;
            }
            if (j >= start && j <= end)
                *(ptr + i * cols + j) = 1;
            else
                *(ptr + i * cols + j) = 0;
        }
    }
}

void print(int* ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%i \t", *(ptr + i * cols + j));
        }
        printf("\n");
    }
}
*/

#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define n 4
#define m 3

void main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int mas[n][m], i, j;
    printf("Исходный массив:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            mas[i][j] = rand() % 10;
            printf("%i \t", mas[i][j]);
        }
        printf("\n");
    }

    printf("\nИтоговый массив:\n");

    
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)   
        {
            for (j = 0; j < m; j++)
                printf("%i \t", mas[i][j]);
            printf("\n");
        }
    }
    _getch();
}

/*Задание номер 4 из лабораторной работы по скв № 8*/
/*feature-task*/
/*conflict 2*/

