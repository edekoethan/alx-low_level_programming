/*
 * File: 0-print_listint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @v: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *v)
{
	size_t nodes = 0;

	while (v)
	{
		nodes++;
		printf("%d\n", v->n);
		v = v->next;
	}

	return (nodes);
}
