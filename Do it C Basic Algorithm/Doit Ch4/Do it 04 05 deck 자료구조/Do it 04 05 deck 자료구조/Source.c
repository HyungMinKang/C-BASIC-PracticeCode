#include <stdio.h>
#include "Header.h"

int Intialize(IntQueue* q, int max)
{
	q->num = q->front = q->rear = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL)// 큐생성 실패시
	{
		q->max = 0;
		return -1;
	}
	q->max = max;
	return 0;
}

int FrontEnque(IntQueue* q, int x)
{
	if (q->num >= q->max) //큐가 이미 가득참
		return -1;
	else
	{
		q->num++;
		if (--q->front < 0)
			q->front = q->max - 1;

		q->que[q->front]=x;
		return 0;
	}
}

int RearEnque(IntQueue* q, int x)
{
	if (q->num >= q->max)
		return -1;
	else
	{
		q->num++;
		q->que[q->rear++]=x;
		if (q->rear == q->max)
			q->rear = 0;
		return 0;
	}
}

int FrontDeque(IntQueue* q, int *x)

{
	if (q->num <= 0)
		return -1;

	else
	{
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return 0;

	}
}

int RearDeque(IntQueue* q, int* x)
{
	if (q->num <= 0)
		return -1;
	else
	{
		q->num--;
		if (--q->rear < 0)
			q->rear = q->max;
		*x = q->que[q->rear];
		return 0;
	}
}

int FrontPeek(IntQueue* q, int* x)
{
	if (q->num <= 0)
		return -1;
	*x = q->que[q->front];
	return 0;
}

int RearPeek(IntQueue* q, int* x)
{
	if (q->num <= 0)
		return -1;
	*x = q->que[q->rear];
	return 0;
}

void Clear(IntQueue* q)
{
	q->num = q->front = q->rear = 0;
}

int Capacity(const IntQueue* q)
{
	return q->max;
}

int Size(const IntQueue* q)
{
	return q->num;
}

int Isempty(const IntQueue* q)
{
	return q->num <= 0;
}

int Isfull(const IntQueue* q)
{
	return q->num >= q->max;
}

int Search(const IntQueue* q, int x)
{
	int i, idx;
	for (i = 0; i < q->num; i++)
	{
		if (q->que[idx = (i + q->front) % q->max] == x)
			return idx;
	}
	return -1;
}

void Print(const IntQueue* q)
{
	int i;
	for (i = 0; i < q->num; i++)
		printf("%d", q->que[(i + q->front) % q->max]);
	putchar('\n');
}

void Terminate(IntQueue* q)
{
	if (q->que != NULL)
		free(q->que);
	q->max = q->front = q->rear = q->num = 0;

}

int Search2(IntQueue* q, int x)
{
	int i, idx;

	for (i = 0; i < q->num; i++)
	{
		if (q->que[(i + q->front) % q->max] == x)
			return i;
	}

	return -1;
}