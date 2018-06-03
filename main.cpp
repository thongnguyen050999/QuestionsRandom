#include <iostream>
#include <time.h>
using namespace std;

char ch;
int a, b;
int choice[] = { 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 5,5,5,5, 6, 7, 8, 9, 10, 11, 12 };

void process_6()
{
	cout << "Question " << rand() % 16 +1<< endl;
}

void process_7()
{
	cout << "Question " << rand() % 26 +1<< endl;
}

void process_8()
{
	cout << "Question " << rand() % 21 +1<< endl;
}

void process_9()
{
	cout << "Question " << rand() % 14 +1<< endl;
}

void process_10()
{
	cout << "Question " << rand() % 12 +1<< endl;
}

void print()
{
	srand(time(0));
	while (true)
	{
		system("CLS");
		cout << "Group number: ";
		cin >> a;
		cout << "Package: ";
		cin >> b;
		if (a == 1) cout << "Question " << choice[rand() % 25] << endl;
		else
		{
			switch (b)
			{
			case 6:
				process_6();
				break;
			case 7:
				process_7();
				break;
			case 8:
				process_8();
				break;
			case 9:
				process_9();
				break;
			case 10:
				process_10();
				break;
			}
		}
		cin.ignore();
		getchar();
	}
}

int main()
{
	print();
}
