#include<stdio.h>
#include<math.h>
#include < string.h >
void incrementHeapVariable()
{
	int* x9;
	printf("Input x\r\n");
	scanf_s("%d", &x9);
	printf("%d  %d\r\n", &x9, x9);
}
void sortHeapArray(int* arr, int n)
{

	for (int i = 0; i < n; ++i)
		scanf_s("%d", &arr[i]);
	int x;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (&arr[i] < &arr[j] && i > j)
			{
				x = &arr[i];
				arr[i] = &arr[j];
				arr[j] = &x;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf(" %d  ", arr[i]);
	}
}
void delete(char* str, const char* substr)
{
	printf("pos: %d\n", strstr(str, substr) - str);
	str = strstr(str, substr) - str;
}
int strle(const char* str)
{
	return(strlen(*str));
}
char* find2(const char* str, const char* substr)
{
	char* p;
	p = strchr(str, substr);
	char o = (p - str + 1);
	return(&o);

}
void delete2(char* str, const char* substr)
{
	printf("pos: %d\n", strstr(str, substr) - str);
	str = strstr(str, substr) - str;
}
void h(const double* x, double* result)
{
	*result = (1.0 / (sqrt(2.0) + sqrt(*x)));
}
void writeArray(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf(" %d  ", arr[i]);
}
void readArray(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
		scanf_s("%d", &arr[i]);
}
void sort(int* arr, int n)
{
	int x;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (&arr[i] < &arr[j] && i > j)
			{
				x = &arr[i];
				arr[i] = &arr[j];
				arr[j] = &x;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		printf(" %d  ", arr[i]);
}
  //Задание 1  Вариант 8
double summ1a(int n) // через if
{
	double o = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
	}
	return(o);
}
double summ1b(int n)  // через while
{
	double o = 0;
	int i = 0;
	while (i < n)
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		++i;
	}
	return(o);
}

double summ1c(int n) // через do while
{
	double o = 0;
	int i = 0;
	do
	{
		if (i & 1)
			o = o - 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			o = o + 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		++i;
	} while (i < n);
	return(o);
}

// Задание 2
double summ2a(double eps)
{
	double o = 0, a = 10000;
	for (int i = 0; a > eps; ++i)
	{

		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
	}
	return(o);
}
double summ2b(double eps)
{
	double o = 0, a = 10000;
	int i = 0;
	while (a > eps)
	{
		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
		++i;
	}
	return(o);
}
double summ2c(double eps)
{
	double o = 0, a = 10000;
	int i = 0;
	do
	{
		if (i & 1)
		{
			a = 1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o - a;
		}
		else
		{
			a = 1 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
			o = o + a;
		}
		++i;
	} while (a > eps);
	return(o);
}
// задание 3
void print1(int n, int k)
{
	double g;
	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
			continue;
		printf("%.2lf  ", g);
	}
}
void print2(int n, int k)
{
	double g;
	int i = 0;
	while (i < n)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
		{
			++i;
			continue;
		}
		printf("%.2lf  ", g);
		++i;
	}
}
void print3(int n, int k)
{
	double g;
	int i = 0;
	do
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (i == k)
		{
			++i;
			continue;
		}
		printf("%.2lf  ", g);
		++i;
	} while (i < n);
}
// задание 4
int findFirstElement1(double eps)
{
	double g;
	for (int i = 0; i > -1; ++i)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d", i + 1);
			break;
		}
	}
}
int findFirstElement2(double eps)
{
	double g;
	int i = 0;
	while (i > -1)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	}

}

int findFirstElement3(double eps)
{
	double g;
	int i = 0;
	do

	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	} while (i > -1);

}
// Задание 5
int findFirstNegativeElement1(double eps)
{
	double g;
	for (int i = 0; i > -1; ++i)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g < 0)
		{
			printf("%d", i + 1);
			break;
		}
	}
}
int findFirstNegativeElement2(double eps)
{
	double g;
	int i = 0;
	while (i > -1)
	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g < 0)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	}

}

int findFirstNegativeElement3(double eps)
{
	double g;
	int i = 0;
	do

	{
		if (i & 1)
			g = -1.0 + (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		else
			g = 1.0 - (2.0 * i - 1.0) / (2.0 * (i + 1.0));
		if (g <= eps && g < 0)
		{
			printf("%d", i + 1);
			break;
		}
		++i;
	} while (i > -1);

}
_Bool isInArea(double x, double y)
{
	int o;
	if (x > 1 || y > 1)
		o = 0;
	else if (x > 0 && y < 0)
		o = 0;
	else
		o = 1;
	return (o);
}
// задание 2
double f(double x)
{
	double o;
	if (x < 3.2)
		return(x*x*x*x+ 9);
	else
		return((54 * x*x*x*x) / (-5 * x*x - 7));
}
// задание 3
#include<stdio.h>
#include<math.h>
double g(double x)
{
	return (1 / (sqrt(2) + sqrt(x)));
}

void g1(double x3, double x4, double result1, double result2)
{
	result1 = 1 / (sqrt(2) + sqrt(x3));
	result2 = 1 / (sqrt(2) + sqrt(x4));
}
//Задание 1
void main()
{
	printf("Laba1\r\n Task1 \r\n");
	//ввод кодом
	int x1 = 8, x2;
	double y1, y2;
	y1 = 1 / (sqrt(2) + sqrt(x1));
	printf("x1=%d; f1=%.2lf\r\n", x1, y1);

	//ввод вручную
	printf("Input x2 \r\n");
	scanf_s("%d", &x2);
	y2 = 1 / (sqrt(2) + sqrt(x2));
	printf("x2= %d; f2= %.2lf \r\n", x2, y2);
	printf("Task2\r\n");
	printf("x1=%d; f1=%.2lf\r\n", x1, f(x1));
	printf("Input x \r\n");
	scanf_s("%d", &x2);
	printf("x2= %d; f2= %.2lf \r\n", x2, f(x2));
	printf("Task3\r\n");
	printf("x1=%d; f1=%.2lf\r\n", x1, f(x1));
	printf("Input x \r\n");
	scanf_s("%d", &x2);
	printf("x2= %d; f2= %.2lf \r\n", x2, f(x2));
	printf("Task4\r\n");
	double x3 = 7, x4;
	printf("Input x2 \r\n");
	scanf_s("%lf", &x4);
	double result1 = 1 / (sqrt(2) + sqrt(x3)), result2 = 1 / (sqrt(2) + sqrt(x4));
	printf("x1=%.2lf; f1=%.2lf\r\n", x3, result1);
	printf("x2= %.2lf; f2= %.2lf \r\n", x4, result2);
	printf("Task5\r\n");
	printf("x1=%d; f1=%.2lf\r\n", x1, f(x1));
	printf("Input x \r\n");
	scanf_s("%d", &x2);
	printf("x2= %d; f2= %.2lf \r\n", x2, f(x2));
	printf("Task6\r\n");
	printf("Input x2 \r\n");
	scanf_s("%lf", &x4);
	
	printf("x1=%.2lf; f1=%.2lf\r\n", x3, result1);
	printf("x2= %.2lf; f2= %.2lf \r\n", x4, result2);

	system("pause");
	
	int n;
	double x, y;
	printf("\r\nLaba2\r\n Task 3 \r\n Chose case \r\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("Task 1\r\n Input x\r\n");
		scanf_s("%lf", &x);
		printf("Input y\r\n");
		scanf_s("%lf", &y);
		printf("Answer: %d \r\n", isInArea(x, y));
		break;
	case 2:
		printf("Task 2\r\n Input x\r\n");
		scanf_s("%lf", &x);
		printf("Answer: %.2lf \r\n", g(x));
		break;
	default:
		printf("Wrong input");
		break;
	}
	system("pause");
	int u, m = 6, k = 3;
	double eps = 1;
	printf("\r\nLaba3\r\n Task 6 \r\n Chose case \r\n");
	scanf_s("%d", &u);
	switch (u)
	{
	case 1:

		printf("Task1 \r\n%.2lf \r\n%.2lf \r\n%.2lf \r\n", summ1a(m), summ1b(m), summ1c(m));
		break;
	case 2:
		printf("Task2 \r\n%.2lf \r\n%.2lf \r\n%.2lf \r\n", summ2a(eps), summ2b(eps), summ2c(eps));
		break;
	case 3:
		printf("Task3 \r\n");
		print1(m, k);
		printf("\r\n");
		print2(m, k);
		printf("\r\n");
		print3(m, k);
		printf("\r\n");
		break;
	case 4:
		printf("Task4 \r\n");
		findFirstElement1(eps);
		printf("\r\n");
		findFirstElement2(eps);
		printf("\r\n");
		findFirstElement3(eps);
		printf("\r\n");
		break;
	case 5:
		printf("Task5 \r\n");
		findFirstNegativeElement1(eps);
		printf("\r\n");
		findFirstNegativeElement2(eps);
		printf("\r\n");
		findFirstNegativeElement3(eps);
		printf("\r\n");
		break;
	default:
		printf("Wrong input");
		break;
	}

	system("pause");
	printf("\r\nLaba4\r\n Task1\r\n");
	double x7;
	double result;
	int arr[5], b = 3;
	arr[0] = 1;
	arr[1] = arr[0] + 1;
	arr[2] = arr[1] + 1;
	arr[3] = arr[2] + 1;
	x7 = 43.0;
	h(&x7, &result);
	printf("x= %lf; f= %.2lf \r\n \r\n", x7, result);
	printf("\r\nTask5\r\n");
	printf("%d\r\n", b);
	printf("Task2\r\n\r\n");
	writeArray(&arr, b);

	printf("\r\nTask3\r\n");
	readArray(&arr, b);

	printf("Task4\r\n");
	sort(&arr, b);



	system("pause");
	printf("\r\nLaba5\r\nTask1\r\n");
	char* str = "rfadfg", * substr = "a";
	printf("%d\r\n", strlen(str));

	printf("Task2\r\n");
	printf("%d\r\n", find2(str, substr));

	printf("Task3\r\n");
	delete(str, substr);


	system("pause");
	printf("\r\nLaba6\r\nTask1\r\n");
	incrementHeapVariable();
	printf("\r\nTask2\r\n");
	int arr2[5], v = 3;
	sortHeapArray(&arr2, v);
	printf("\r\nTask3\r\n");
	char* strk = "rfadfg", * substrk = "a";
	delete2(strk, substrk);
	system("pause");

}