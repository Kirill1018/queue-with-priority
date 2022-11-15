#include "queue.cpp"
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	queue client_1, client_2, client_3, client_4, client_5, client_6, client_7, client_8, client_9, client_10;
	client_1.completion(client_1, client_2, client_3, client_4, client_5, client_6, client_7, client_8, client_9, client_10);
}
void queue::completion(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10)
{
	client_1.req_numb = rand() % 40 + 50;
	SetColor(1, 0);
	cout << "первый клиент" << endl;
	cin >> client_1.user;
	client_1.priority = rand() % 10 + 20;
	client_1.page_amount = rand() % 20 + 30;
	client_2.req_numb = rand() % 40 + 50;
	SetColor(2, 0);
	cout << "второй клиент" << endl;
	cin >> client_2.user;
	client_2.priority = rand() % 10 + 20;
	client_2.page_amount = rand() % 20 + 30;
	client_3.req_numb = rand() % 40 + 50;
	SetColor(3, 0);
	cout << "третий клиент" << endl;
	cin >> client_3.user;
	client_3.priority = rand() % 10 + 20;
	client_3.page_amount = rand() % 20 + 30;
	client_4.req_numb = rand() % 40 + 50;
	SetColor(4, 0);
	cout << "четвЄртый клиент" << endl;
	cin >> client_4.user;
	client_4.priority = rand() % 10 + 20;
	client_4.page_amount = rand() % 20 + 30;
	client_5.req_numb = rand() % 40 + 50;
	SetColor(5, 0);
	cout << "п€тый клиент" << endl;
	cin >> client_5.user;
	client_5.priority = rand() % 10 + 20;
	client_5.page_amount = rand() % 20 + 30;
	client_6.req_numb = rand() % 40 + 50;
	SetColor(6, 0);
	cout << "шестой клиент" << endl;
	cin >> client_6.user;
	client_6.priority = rand() % 10 + 20;
	client_6.page_amount = rand() % 20 + 30;
	client_7.req_numb = rand() % 40 + 50;
	SetColor(7, 0);
	cout << "седьмой клиент" << endl;
	cin >> client_7.user;
	client_7.priority = rand() % 10 + 20;
	client_7.page_amount = rand() % 20 + 30;
	client_8.req_numb = rand() % 40 + 50;
	SetColor(8, 0);
	cout << "восьмой клиент" << endl;
	cin >> client_8.user;
	client_8.priority = rand() % 10 + 20;
	client_8.page_amount = rand() % 20 + 30;
	client_9.req_numb = rand() % 40 + 50;
	SetColor(9, 0);
	cout << "дев€тый клиент" << endl;
	cin >> client_9.user;
	client_9.priority = rand() % 10 + 20;
	client_9.page_amount = rand() % 20 + 30;
	client_10.req_numb = rand() % 40 + 50;
	SetColor(10, 0);
	cout << "дес€тый клиент" << endl;
	cin >> client_10.user;
	client_10.priority = rand() % 10 + 20;
	client_10.page_amount = rand() % 20 + 30;
	client_1.print_page(client_1, client_2, client_3, client_4, client_5, client_6, client_7, client_8, client_9, client_10);
}
void queue::print_page(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10)
{
	int page_time = 3;
	client_1.wait_time = page_time * client_1.page_amount;
	client_2.wait_time = page_time * client_2.page_amount;
	client_3.wait_time = page_time * client_3.page_amount;
	client_4.wait_time = page_time * client_4.page_amount;
	client_5.wait_time = page_time * client_5.page_amount;
	client_6.wait_time = page_time * client_6.page_amount;
	client_7.wait_time = page_time * client_7.page_amount;
	client_8.wait_time = page_time * client_8.page_amount;
	client_9.wait_time = page_time * client_9.page_amount;
	client_10.wait_time = page_time * client_10.page_amount;
	client_1.turn(client_1, client_2, client_3, client_4, client_5, client_6, client_7, client_8, client_9, client_10);
}
void queue::turn(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10)
{
	SetColor(11, 0);
	cout << "є запроса" << setw(6) << "кто печатает" << setw(6) << "приоритет" << setw(6) << "количество страниц" << setw(6) << "врем€ ожидани€" << endl;
	cout << client_1.req_numb << setw(6) << client_1.user << setw(6) << client_1.priority << setw(6) << client_1.page_amount << setw(6) << client_1.wait_time << endl;
	cout << client_2.req_numb << setw(6) << client_2.user << setw(6) << client_2.priority << setw(6) << client_2.page_amount << setw(6) << client_2.wait_time << endl;
	cout << client_3.req_numb << setw(6) << client_3.user << setw(6) << client_3.priority << setw(6) << client_3.page_amount << setw(6) << client_3.wait_time << endl;
	cout << client_4.req_numb << setw(6) << client_4.user << setw(6) << client_4.priority << setw(6) << client_4.page_amount << setw(6) << client_4.wait_time << endl;
	cout << client_5.req_numb << setw(6) << client_5.user << setw(6) << client_5.priority << setw(6) << client_5.page_amount << setw(6) << client_5.wait_time << endl;
	cout << client_6.req_numb << setw(6) << client_6.user << setw(6) << client_6.priority << setw(6) << client_6.page_amount << setw(6) << client_6.wait_time << endl;
	cout << client_7.req_numb << setw(6) << client_7.user << setw(6) << client_7.priority << setw(6) << client_7.page_amount << setw(6) << client_7.wait_time << endl;
	cout << client_8.req_numb << setw(6) << client_8.user << setw(6) << client_8.priority << setw(6) << client_8.page_amount << setw(6) << client_8.wait_time << endl;
	cout << client_9.req_numb << setw(6) << client_9.user << setw(6) << client_9.priority << setw(6) << client_9.page_amount << setw(6) << client_9.wait_time << endl;
	cout << client_10.req_numb << setw(6) << client_10.user << setw(6) << client_10.priority << setw(6) << client_10.page_amount << setw(6) << client_10.wait_time << endl;
	client_1.sorting(client_1, client_2, client_3, client_4, client_5, client_6, client_7, client_8, client_9, client_10);
}
void queue::sorting(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10)
{
	SetColor(12, 0);
	cout << "сортировка по приоритету" << endl;
	SetColor(13, 0);
	cout << "є запроса" << setw(6) << "кто печатает" << setw(6) << "приоритет" << setw(6) << "количество страниц" << setw(6) << "врем€ ожидани€" << endl;
	int time = 0;//врем€
	if (client_1.priority >= client_2.priority && client_1.priority >= client_3.priority && client_1.priority >= client_4.priority && client_1.priority >= client_5.priority && client_1.priority >= client_6.priority && client_1.priority >= client_7.priority && client_1.priority >= client_8.priority && client_1.priority >= client_9.priority && client_1.priority >= client_10.priority)
	{
		time += client_1.wait_time;
		cout << client_1.req_numb << setw(6) << client_1.user << setw(6) << client_1.priority << setw(6) << client_1.page_amount << setw(6) << time << endl;
	}
	if (client_2.priority >= client_1.priority && client_2.priority >= client_3.priority && client_2.priority >= client_4.priority && client_2.priority >= client_5.priority && client_2.priority >= client_6.priority && client_2.priority >= client_7.priority && client_2.priority >= client_8.priority && client_2.priority >= client_9.priority && client_2.priority >= client_10.priority)
	{
		time += client_2.wait_time;
		cout << client_2.req_numb << setw(6) << client_2.user << setw(6) << client_2.priority << setw(6) << client_2.page_amount << setw(6) << time << endl;
	}
	if (client_3.priority >= client_1.priority && client_3.priority >= client_2.priority && client_3.priority >= client_4.priority && client_3.priority >= client_5.priority && client_3.priority >= client_6.priority && client_3.priority >= client_7.priority && client_3.priority >= client_8.priority && client_3.priority >= client_9.priority && client_3.priority >= client_10.priority)
	{
		time += client_3.wait_time;
		cout << client_3.req_numb << setw(6) << client_3.user << setw(6) << client_3.priority << setw(6) << client_3.page_amount << setw(6) << time << endl;
	}
	if (client_4.priority >= client_1.priority && client_4.priority >= client_3.priority && client_4.priority >= client_2.priority && client_4.priority >= client_5.priority && client_4.priority >= client_6.priority && client_4.priority >= client_7.priority && client_4.priority >= client_8.priority && client_4.priority >= client_9.priority && client_4.priority >= client_10.priority)
	{
		time += client_4.wait_time;
		cout << client_4.req_numb << setw(6) << client_4.user << setw(6) << client_4.priority << setw(6) << client_4.page_amount << setw(6) << time << endl;
	}
	if (client_5.priority >= client_1.priority && client_5.priority >= client_3.priority && client_5.priority >= client_4.priority && client_5.priority >= client_2.priority && client_5.priority >= client_6.priority && client_5.priority >= client_7.priority && client_5.priority >= client_8.priority && client_5.priority >= client_9.priority && client_5.priority >= client_10.priority)
	{
		time += client_5.wait_time;
		cout << client_5.req_numb << setw(6) << client_5.user << setw(6) << client_5.priority << setw(6) << client_5.page_amount << setw(6) << time << endl;
	}
	if (client_6.priority >= client_1.priority && client_6.priority >= client_3.priority && client_6.priority >= client_4.priority && client_6.priority >= client_5.priority && client_6.priority >= client_2.priority && client_6.priority >= client_7.priority && client_6.priority >= client_8.priority && client_6.priority >= client_9.priority && client_6.priority >= client_10.priority)
	{
		time += client_6.wait_time;
		cout << client_6.req_numb << setw(6) << client_6.user << setw(6) << client_6.priority << setw(6) << client_6.page_amount << setw(6) << time << endl;
	}
	if (client_7.priority >= client_1.priority && client_7.priority >= client_3.priority && client_7.priority >= client_4.priority && client_7.priority >= client_5.priority && client_7.priority >= client_6.priority && client_7.priority >= client_2.priority && client_7.priority >= client_8.priority && client_7.priority >= client_9.priority && client_7.priority >= client_10.priority)
	{
		time += client_7.wait_time;
		cout << client_7.req_numb << setw(6) << client_7.user << setw(6) << client_7.priority << setw(6) << client_7.page_amount << setw(6) << time << endl;
	}
	if (client_8.priority >= client_1.priority && client_8.priority >= client_3.priority && client_8.priority >= client_4.priority && client_8.priority >= client_5.priority && client_8.priority >= client_6.priority && client_8.priority >= client_7.priority && client_8.priority >= client_2.priority && client_8.priority >= client_9.priority && client_8.priority >= client_10.priority)
	{
		time += client_8.wait_time;
		cout << client_8.req_numb << setw(6) << client_8.user << setw(6) << client_8.priority << setw(6) << client_8.page_amount << setw(6) << time << endl;
	}
	if (client_9.priority >= client_1.priority && client_9.priority >= client_3.priority && client_9.priority >= client_4.priority && client_9.priority >= client_5.priority && client_9.priority >= client_6.priority && client_9.priority >= client_7.priority && client_9.priority >= client_8.priority && client_9.priority >= client_2.priority && client_9.priority >= client_10.priority)
	{
		time += client_9.wait_time;
		cout << client_9.req_numb << setw(6) << client_9.user << setw(6) << client_9.priority << setw(6) << client_9.page_amount << setw(6) << time << endl;
	}
	if (client_10.priority >= client_1.priority && client_10.priority >= client_3.priority && client_10.priority >= client_4.priority && client_10.priority >= client_5.priority && client_10.priority >= client_6.priority && client_10.priority >= client_7.priority && client_10.priority >= client_8.priority && client_10.priority >= client_9.priority && client_10.priority >= client_2.priority)
	{
		time += client_10.wait_time;
		cout << client_10.req_numb << setw(6) << client_10.user << setw(6) << client_10.priority << setw(6) << client_10.page_amount << setw(6) << time << endl;
	}
	if (client_1.priority <= client_2.priority && client_1.priority <= client_3.priority && client_1.priority <= client_4.priority && client_1.priority <= client_5.priority && client_1.priority <= client_6.priority && client_1.priority <= client_7.priority && client_1.priority <= client_8.priority && client_1.priority <= client_9.priority && client_1.priority <= client_10.priority)
	{
		time += client_1.wait_time;
		cout << client_1.req_numb << setw(6) << client_1.user << setw(6) << client_1.priority << setw(6) << client_1.page_amount << setw(6) << time << endl;
	}
	if (client_2.priority <= client_1.priority && client_2.priority <= client_3.priority && client_2.priority <= client_4.priority && client_2.priority <= client_5.priority && client_2.priority <= client_6.priority && client_2.priority <= client_7.priority && client_2.priority <= client_8.priority && client_2.priority <= client_9.priority && client_2.priority <= client_10.priority)
	{
		time += client_2.wait_time;
		cout << client_2.req_numb << setw(6) << client_2.user << setw(6) << client_2.priority << setw(6) << client_2.page_amount << setw(6) << time << endl;
	}
	if (client_3.priority <= client_1.priority && client_3.priority <= client_2.priority && client_3.priority <= client_4.priority && client_3.priority <= client_5.priority && client_3.priority <= client_6.priority && client_3.priority <= client_7.priority && client_3.priority <= client_8.priority && client_3.priority <= client_9.priority && client_3.priority <= client_10.priority)
	{
		time += client_3.wait_time;
		cout << client_3.req_numb << setw(6) << client_3.user << setw(6) << client_3.priority << setw(6) << client_3.page_amount << setw(6) << time << endl;
	}
	if (client_4.priority <= client_1.priority && client_4.priority <= client_3.priority && client_4.priority <= client_2.priority && client_4.priority <= client_5.priority && client_4.priority <= client_6.priority && client_4.priority <= client_7.priority && client_4.priority <= client_8.priority && client_4.priority <= client_9.priority && client_4.priority <= client_10.priority)
	{
		time += client_4.wait_time;
		cout << client_4.req_numb << setw(6) << client_4.user << setw(6) << client_4.priority << setw(6) << client_4.page_amount << setw(6) << time << endl;
	}
	if (client_5.priority <= client_1.priority && client_5.priority <= client_3.priority && client_5.priority <= client_4.priority && client_5.priority <= client_2.priority && client_5.priority <= client_6.priority && client_5.priority <= client_7.priority && client_5.priority <= client_8.priority && client_5.priority <= client_9.priority && client_5.priority <= client_10.priority)
	{
		time += client_5.wait_time;
		cout << client_5.req_numb << setw(6) << client_5.user << setw(6) << client_5.priority << setw(6) << client_5.page_amount << setw(6) << time << endl;
	}
	if (client_6.priority <= client_1.priority && client_6.priority <= client_3.priority && client_6.priority <= client_4.priority && client_6.priority <= client_5.priority && client_6.priority <= client_2.priority && client_6.priority <= client_7.priority && client_6.priority <= client_8.priority && client_6.priority <= client_9.priority && client_6.priority <= client_10.priority)
	{
		time += client_6.wait_time;
		cout << client_6.req_numb << setw(6) << client_6.user << setw(6) << client_6.priority << setw(6) << client_6.page_amount << setw(6) << time << endl;
	}
	if (client_7.priority <= client_1.priority && client_7.priority <= client_3.priority && client_7.priority <= client_4.priority && client_7.priority <= client_5.priority && client_7.priority <= client_6.priority && client_7.priority <= client_2.priority && client_7.priority <= client_8.priority && client_7.priority <= client_9.priority && client_7.priority <= client_10.priority)
	{
		time += client_7.wait_time;
		cout << client_7.req_numb << setw(6) << client_7.user << setw(6) << client_7.priority << setw(6) << client_7.page_amount << setw(6) << time << endl;
	}
	if (client_8.priority <= client_1.priority && client_8.priority <= client_3.priority && client_8.priority <= client_4.priority && client_8.priority <= client_5.priority && client_8.priority <= client_6.priority && client_8.priority <= client_7.priority && client_8.priority <= client_2.priority && client_8.priority <= client_9.priority && client_8.priority <= client_10.priority)
	{
		time += client_8.wait_time;
		cout << client_8.req_numb << setw(6) << client_8.user << setw(6) << client_8.priority << setw(6) << client_8.page_amount << setw(6) << time << endl;
	}
	if (client_9.priority <= client_1.priority && client_9.priority <= client_3.priority && client_9.priority <= client_4.priority && client_9.priority <= client_5.priority && client_9.priority <= client_6.priority && client_9.priority <= client_7.priority && client_9.priority <= client_8.priority && client_9.priority <= client_2.priority && client_9.priority <= client_10.priority)
	{
		time += client_9.wait_time;
		cout << client_9.req_numb << setw(6) << client_9.user << setw(6) << client_9.priority << setw(6) << client_9.page_amount << setw(6) << time << endl;
	}
	if (client_10.priority <= client_1.priority && client_10.priority <= client_3.priority && client_10.priority <= client_4.priority && client_10.priority <= client_5.priority && client_10.priority <= client_6.priority && client_10.priority <= client_7.priority && client_10.priority <= client_8.priority && client_10.priority <= client_9.priority && client_10.priority <= client_2.priority)
	{
		time += client_10.wait_time;
		cout << client_10.req_numb << setw(6) << client_10.user << setw(6) << client_10.priority << setw(6) << client_10.page_amount << setw(6) << time << endl;
	}
}