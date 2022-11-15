#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
class queue
{
public:
	queue()
	{
		req_numb = 0;//№ запроса
		priority = 0;//приоритет
		page_amount = 0;//количество страниц
		wait_time = 0;//время ожидания
	}
	void print_page(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10);
	void turn(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10);
	void completion(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10);
	void sorting(queue client_1, queue client_2, queue client_3, queue client_4, queue client_5, queue client_6, queue client_7, queue client_8, queue client_9, queue client_10);
	int req_numb, priority, page_amount, wait_time;
	string user;
};