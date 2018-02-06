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

	cout << "\n����. �����, ������������� ���������\n";
	cout << "\n������� �������� 9 �����.\n";
	cout << "��� ������ �������� 0." << endl;

	do
	{
		cout << "\n������� ����� ������.\n";
		cout << "n = ";
		cin >> n;
		switch (n)
		{
#pragma region Task1
		case 1:
		{
			/*1. ���� ��� ����� ����� A � B (A < B).
			����� ��� ����� �����, ������������� �����
			������� ������� (�� ������� ���� ��� �����),
			� ������� �� ��������, � ����� ���������� N ���� �����*/

			cout << "\n������ �1\n";

			int A, B;

			cout << endl;

			while (1)
			{
				cout << "������� ��� ����� ����� � � �:\n";

				cout << "A = ";
				cin >> A;

				cout << "B = ";
				cin >> B;

					if (A < B) break;

					cout << "�� ������� � < B.\n";
					cout << "������� ����� ��� ���.\n";
			}

			cout << endl;

				for (i = B - 1; i > A; i--)
				{
					cout << i << endl;
				}

				cout << endl;
				cout << "���������� ����� = " << B - A - 1 << endl;

				cout << endl;

			system("pause");
			system("cls");
		}
		break;
#pragma endregion

#pragma region Task2
		case 2:
		{
			/*2. ���� ����� ����� N (> 2) � ��� ������������ ����� �� �������� ���:
			A, B (A < B). ������� F(X) ������ �������� F(X) = 1 � sin(X).
			����� �������� ������� F � N �������������� ������,
			���������� ��������� ������� [A, B]: F(A), F(A + H), F(A + 2H),... , F(B). */

			cout.precision(2);

			cout << "\n������ �2\n";

			cout << endl;

			int N;
			double A2, B2, H;

				while (1)
				{
					cout << "������� ����� ����� N>2:\n";
					cout << "N = ";
					cin >> N;

					if (N > 2) break;

					cout << "�� ������� N > 2.\n";
					cout << "������� N ��� ���.\n";

				}

			cout << endl;

				while (1)
				{
					cout << "������� ��� ������������ ����� � � �:\n";
					cout << "A = ";
					cin >> A2;

					cout << "B = ";
					cin >> B2;

					cout << endl;

					if (A2 < B2) break;
					{
						cout << "�� ������� � < B.\n";
						cout << "������� ����� ��� ���.\n";
					}

				}

			H = (B2 - A2) / (N + 1);
			cout << "��� � = " << H;
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
			/*3.	���� ����� D (> 0).������������������ ����� AN ������������ ��������� �������:
			A1 = 1, A2 = 2, AN = (AN�2+ AN�1)/2, N = 3, 4, ...
			����� ������ �� ������� K, ��� ������� ����������� ������� AK- AK�1 < D,
			� ������� ���� �����, � ����� ����� AK�1 � AK*/

			cout.precision(8);

			cout << "\n������ �3\n";

			cout << endl;

			float D;

				while (1)
				{
					cout << "������� ����� D>0.\n";
					cout << "D = ";
					cin >> D;

					if (D > 0) break;
					cout << "����� D ������ ��� ������ ����. ������� D ��� ���.\n";

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
				cout << "A" << i - 1 << " = " << an_2 << "   " << "A" << i << " = " << an << "   " << "AK - AK�1 = " << abs(an - an_2) << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task4
		case 4:
		{ /*4.	������ ����������� ����� �� 10 �� N.
		  ������� �������� ������� ���� �����.*/

			cout << "\n������ �4\n";

				while (1)
				{
					cout << "������� ����������� ����� N:\n";
					cout << "N = ";
					cin >> N;

					if (N > 10) break;
					cout << "����� N ������ ��� ������ 10. ������� N ��� ���.\n";

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
			/*5. ������� �������� ����� �� 11 �� 99.*/

			cout << "\n������ �5\n";

			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "  �����  | ������� �����  |  " << endl;
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
			/*1. ���� ������������������ �� n ������������ �����,
			������������ � �������������� �����. ����������,
			����� ���������� ������������� ����� �������� � ������
			������������������. �������� �������� �� ������������*/

			cout << "\n��������� ����� � ��������\n";
			cout << "\n������ �1\n";

			cout << endl;
			cout << "������� ���������� ����� � ������������������ n:\n";

			cout << "n = ";
			cin >> n;

			cout << "������� ������������������ ������������ �����, �������������� � �������������� ����� :\n";
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
				cout << "���������� ������������� �����: " << s << endl;			
				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task7
		case 7:
		{
			/*2. ���� ������������������ ����� ����� 1 2 18 , , ..., , a a a
			� ������ ������� �������� ��������� ������ ����� ����� ���������.
			���������� ���������� ����� ��������� ������������������.
			�������� �������� �� ������������*/

			int current, prev;

			cout << "\n��������� ����� � ��������\n";
			cout << "\n������ �2\n";

			cout << endl;

			cout << "������� ���������� ����� � ������������������ n:\n";
			cout << "n = ";
			cin >> n;

			cout << "������� ������������������ ������������ �����:\n";
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
				cout << "���������� ���������� �����: " << s << endl;

				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

#pragma region Task8
		case 8:
		{ /*1.	�������� ������ �� ����������� ������� �� 20 �������� ������.
		  � ������ ������ ����������� ��� �������, ����� ��� ��������� ������.
		  ������� �������� ����� �� ����������� ������ "5"?
		  �������� �������� �� ������������. ����������� ��� ������:
				a.	��������, ��� ������� ����� �� ��� ������� ������
				b.	�����������, ��� ������� ����� ����� ��� ������� ������ */

			cout << "\n������������� ��������� ��������� ����� ���������� ����� � ��������\n";
			cout << "\n������ �1\n";

			cout << endl;

			cout << "�. ������� ����� �� ��� ������� ������:\n";

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
				cout << "���������� ������: " << s << endl;
				cout << endl;
				cout << endl;

				cout << "b. �����������, ��� ������� ����� ����� ��� ������� ������:\n";

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
					cout << "���������� ������: " << s << endl;
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
			/*2. �������� �������� � ���������� �������, �������� �� ������ ���� ���.
			������� ��� ������� �� ����. ����������, � ������� ������ ���������� ������ ����
			������ ����������, ������� � ������� ���, ������� �� ����?
			�������� �������� �� ������������.
			����������� ��� ������:
				a.	��������, ��� � �����-�� ��� ��� ������ ��������
				b.	�����������, ��� ������� ����� �� ���� �� � ����� ���� ���. */

			int day = 0, prec;

			cout << "\n������������� ��������� ��������� ����� ���������� ����� � ��������\n";
			cout << "\n������ �2\n";

			cout << endl;

			cout << "�. ���������� ������� ��������� 0.\n";

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

				cout << "���������� ���� ��� �������: " << day<< endl;

				cout << endl;
				cout << endl;

			cout << "b. ��������, ��� ������� ����� �� ���� �� � ����� ���� ��� (���������� ���� � ��� 31):\n";

				prec = 1 + rand() % 31;

				//cout << prec << "  ";

				cout << endl;

				s = 0;
					
					do
					{
						cout<<"���� "<< s+1 <<" = " << 0 << endl;
						s++;
						
					} while (s < prec);

					cout << endl;

			    cout << "���������� ���� ��� �������: " << s << endl;

				cout << endl;

			system("pause");
			system("cls");

		}
		break;
#pragma endregion

		}
	} while (n!=0);

	cout << "\n�������!\n";

	system("pause");

}