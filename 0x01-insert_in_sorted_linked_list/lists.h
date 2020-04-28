#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @after: points to the after node
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	struct listint_s *after;
	struct listint_s *next;
	int n;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n);

size_t print_listint(const listint_t *h);

void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
