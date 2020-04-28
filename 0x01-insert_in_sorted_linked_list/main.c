#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;

	insert_node(NULL, -1);
	insert_node(&head, 28);
	insert_node(&head, 10000);

	print_listint(head);

	free_listint(head);

	return (0);
}
