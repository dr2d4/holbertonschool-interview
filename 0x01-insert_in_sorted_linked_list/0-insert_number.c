#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * fill_after_node - fill after field
 * @number: number to insert
 *
 * Return: void
 */
void fill_after_node(listint_t **head)
{
    listint_t *tmp = *head;

    while (tmp->next)
    {
        tmp->next->after = tmp;
        tmp = tmp->next;
    }
}

/**
 * insert_node - insert node sort
 * @head: pointer to head of list
 * @number: number to insert
 *
 * Return: address to new node
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *tmp, *new_node = NULL;

    if (head)
    {
        new_node = calloc(sizeof(listint_t), sizeof(char));
        fill_after_node(head);
        new_node->n = number;
        tmp = *head;

        while ((tmp && tmp->next) && tmp->n < number)
            tmp = tmp->next;

        if (tmp->n >= number)
        {
            new_node->next = tmp;

            if (tmp->after)
                tmp->after->next = new_node;
            else
                *head = new_node;
        } else
            tmp->next = new_node;
    }

    return (new_node);
}
