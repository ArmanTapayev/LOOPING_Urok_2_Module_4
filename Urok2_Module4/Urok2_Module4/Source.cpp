#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include<time.h>

using namespace std;

void main()
{
	system("color 1A");
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n = 1;
	int i, s, N;

	cout << "\nТЕМА. Циклы, использование отладчика\n";
	cout << "\nЗадание содержит 9 задач.\n";
	cout << "Для выхода наберите 0." << endl;

	do
	{
		cout << "\nВведите номер задачи.\n";
		cout << "n = ";
		cin >> n;
		switch (n)
		{
#pragma region Task1
		case 1:
		{
			/*1. Даны два целых числа A и B (A < B).
			Найти все целые числа, расположенные между
			данными числами (не включая сами эти числа),
			в порядке их убывания, а также количество N этих чисел*/

			cout << "\nЗадача №1\n";

			int A, B;

			cout << endl;

			while (1)
			{
				cout << "Введите два целых числа А и В:\n";

				cout << "A = ";
				cin >> A;

				cout << "B = ";
				cin >> B;

					if (A < B) break;

					cout << "По условию А < B.\n";
					cout << "Введите числа еще раз.\n";
			}

			cout << endl;

				for (i = B - 1; i > A; i--)
				{
					cout << i << endl;
				}

				cout << endl;
				cout << "Количество чисел = " << B - A - 1 << endl;

				cout << endl;

			system("pause");
			system("cls");
		}
		break;
#pragma endregion

#pragma region Task2
		case 2:
		{
			/*2. Дано целое число N (> 2) и две вещественные точки на числовой оси:
			A, B (A < B). Функция F(X) задана формулой F(X) = 1 – sin(X).
			Найти значения функции F в N равноотстоящих точках,
			образующих разбиение отрезка [A, B]: F(A), F(A + H), F(A + 2H),... , F(B). */

			cout.precision(2);

			cout << "\nЗадача №2\n";

			cout << endl;

			int N;
			double A2, B2, H;

				while (1)
				{
					cout << "Введите челое число N>2:\n";
					cout << "N = ";
					cin >> N;

					if (N > 2) break;

					cout << "По условию N > 2.\n";
					cout << "Введите N еще раз.\n";

				}

			cout << endl;

				while (1)
				{
					cout << "Введите два вещественных числа А и В:\n";
					cout << "A = ";
					cin >> A2;

					cout << "B = ";
					cin >> B2;

					cout << endl;

					if (A2 < B2) break;
					{
						cout << "По условию А < B.\n";
						cout << "Введите числа еще раз.\n";
					}

				}

			H = (B2 - A2) / (N + 1);
			cout << "Шаг Н = " << H;
			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "      X     |     F(X)       " << endl;
			cout << "--------------------------- " << endl;

			do
			{
				cout << "   " << A2 << "\t    |    " << 1 - sin(A2) << endl;
				A2 = A2 + H;
			} while (A2 < B2);

			cout << "   " << B2 << "\t    |    " << 1 - sin(B2) << endl;

			cout << endl;

			system("pause");
			system("cls");
		}
		break;
#pragma endregion

#pragma region Task3
		case 3:
		{
			/*3.	Дано число D (> 0).Последовательность чисел AN определяется следующим образом:
			A1 = 1, A2 = 2, AN = (AN–2+ AN–1)/2, N = 3, 4, ...
			Найти первый из номеров K, для которых выполняется условие AK- AK–1 < D,
			и вывести этот номер, а также числа AK–1 и AK*/

			cout.precision(8);

			cout << "\nЗадача №3\n";

			cout << endl;

			float D;

				while (1)
				{
					cout << "Введите число D>0.\n";
					cout << "D = ";
					cin >> D;

					if (D > 0) break;
					cout << "Число D должно быь больше нуля. Введите D еще раз.\n";

				}

				float an_1;
				float an_2;
				float an;

				an_1 = 1;
				an_2 = 2;
				an = (an_2 + an_1) / 2;
				i = 3;

					while (abs(an - an_2) >= D)
					{
						i++;
						an_1 = an_2;
						an_2 = an;
						an = (an_2 + an_1) / 2;
					}

				cout << endl;
				cout << "K = " << i << endl;
				cout << "A" << i - 1 << " = " << an_2 << "   " << "A" << i << " = " << an << "   " << "AK - AK–1 = " << abs(an - an_2) << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task4
		case 4:
		{ /*4.	Задано натуральные числа от 10 до N.
		  Вывести нечетные кратные пяти числа.*/

			cout << "\nЗадача №4\n";

				while (1)
				{
					cout << "Введите натуральное число N:\n";
					cout << "N = ";
					cin >> N;

					if (N > 10) break;
					cout << "Число N должно быь больше 10. Введите N еще раз.\n";

				}

				cout << endl;

					for (i = 10; i <= N; i++)
					{
						if (i % 2 != 0 && i % 5 == 0)
						{
							cout << "    " << i << endl;
						}
					}

				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task5
		case 5:
		{
			/*5. Вывести квадраты чисел от 11 до 99.*/

			cout << "\nЗадача №5\n";

			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "  Число  | Квадрат числа  |  " << endl;
			cout << "--------------------------- " << endl;

			for (i = 11; i <= 99; i++)
			{
				cout << "    " << i << "\t |\t" << i*i << "\t  |" << endl;
			}

			cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task6
		case 6:
		{
			/*1. Дана последовательность из n вещественных чисел,
			начинающаяся с отрицательного числа. Определить,
			какое количество отрицательных чисел записано в начале
			последовательности. Условный оператор не использовать*/

			cout << "\nОператоры цикла с условием\n";
			cout << "\nЗадача №1\n";

			cout << endl;
			cout << "Введите количество чисел в последовательности n:\n";

			cout << "n = ";
			cin >> n;

			cout << "Введите последовательность вещественных чисел, начинающихсяся с отрицательного числа :\n";
			cout << endl;

				double x;

				s = 0;

					for (i = 1; i <= n; i++)
					{
						cin >> x;

							while (x < 0)
							{
								s++;
								break;
							}
					}

				cout << endl;
				cout << "Количество отрицательных чисел: " << s << endl;			
				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task7
		case 7:
		{
			/*2. Дана последовательность целых чисел 1 2 18 , , ..., , a a a
			в начале которой записано несколько равных между собой элементов.
			Определить количество таких элементов последовательности.
			Условный оператор не использовать*/

			int current, prev;

			cout << "\nОператоры цикла с условием\n";
			cout << "\nЗадача №2\n";

			cout << endl;

			cout << "Введите количество чисел в последовательности n:\n";
			cout << "n = ";
			cin >> n;

			cout << "Введите последовательность вещественных чисел:\n";
			cin >> prev;

				s = 1;

					for (i = 1; i < n; i++)
					{
						cin >> current;

							while (prev == current)
							{
								s++;
								break;
							}

						prev = current;

					}

				cout << endl;
				cout << "Количество одинаковых чисел: " << s << endl;

				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task8
		case 8:
		{ /*1.	Известны оценки по информатике каждого из 20 учеников класса.
		  В начале списка перечислены все пятерки, затем все остальные оценки.
		  Сколько учеников имеют по информатике оценку "5"?
		  Условный оператор не использовать. Рассмотреть два случая:
				a.	известно, что пятерки имеют не все ученики класса
				b.	допускается, что пятерки могут иметь все ученики класса */

			cout << "\nИспользование условного оператора после операторов цикла с условием\n";
			cout << "\nЗадача №1\n";

			cout << endl;

			cout << "а. Пятерки имеют не все ученики класса:\n";

			int five;

				s = 0;

						five = 1 + rand() % 19;

						//cout << five << endl;

							do
							{
								cout << 5 <<"  ";
								s++;

							} while (s<five);

							int k;
							k = s;

								do
								{
									cout << 1 + rand() % 4 << "  ";
									k++;

								} while (k < 20);


				cout << endl;
				cout << "Количество пятёрок: " << s << endl;
				cout << endl;
				cout << endl;

				cout << "b. Допускается, что пятерки могут иметь все ученики класса:\n";

					five = 1 + rand() % 20;

					//cout << five << endl;

					s = 0;

						do
						{
							cout << 5 << "  ";
							s++;

						} while ( s < five);

							k = s;

							while (k < 20)
							{
								cout << 1 + rand() % 4 << "  ";
								k++;

							}

					cout << endl;
					cout << "Количество пятёрок: " << s << endl;
					cout << endl;
					cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task9
		case 9:
		{
			/*2. Известны сведения о количестве осадков, выпавших за каждый день мая.
			Первого мая осадков не было. Определить, в течение какого количества первых дней
			месяца непрерывно, начиная с первого мая, осадков не было?
			Условный оператор не использовать.
			Рассмотреть два случая:
				a.	известно, что в какие-то дни мая осадки выпадали
				b.	допускается, что осадков могло не быть ни в какой день мая. */

			int day = 0, prec;

			cout << "\nИспользование условного оператора после операторов цикла с условием\n";
			cout << "\nЗадача №2\n";

			cout << endl;

			cout << "а. Отсутствие осадков обозначим 0.\n";

				s = 0;

				cout << 0 << "  ";

					do
					{	
						prec = 0 + rand() % 2;
						cout << prec << "  ";
						s+= prec;
						day++;

					} while (s < 1);

					cout << endl;

				cout << "Количество дней без осадков: " << day<< endl;

				cout << endl;
				cout << endl;

			cout << "b. Допустим, что осадков могло не быть ни в какой день мая (количество дней в мае 31):\n";

				prec = 1 + rand() % 31;

				//cout << prec << "  ";

				cout << endl;

				s = 0;
					
					do
					{
						cout<<"день "<< s+1 <<" = " << 0 << endl;
						s++;
						
					} while (s < prec);

					cout << endl;

			    cout << "Количество дней без осадков: " << s << endl;

				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

		}
	} while (n!=0);

	cout << "\nСпасибо!\n";

	system("pause");

}