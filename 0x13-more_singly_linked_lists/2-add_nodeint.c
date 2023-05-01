#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the head of the linked list
 * @n: the integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
/* Memory allocation failed */
	return (NULL);
	}

/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

/* Set the head of the list to point to the new node */
	*head = new_node;

/* Return the address of the new node */
	return (new_node);
}
