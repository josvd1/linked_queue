#ifndef QUEUE_FUNCTIONS_H
#define QUEUE_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *front;
struct node *rear;

void insert();
void delete();
void display();

#endif