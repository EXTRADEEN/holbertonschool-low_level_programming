#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data (n),
 * of a dlistint_t linked list
 * @head: pointer to the linked list
 * Return: sum of data,
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
