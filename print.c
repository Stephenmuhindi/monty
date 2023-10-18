#include "monty.h"

/**
 * f_pint - displays top().
 * @head: head
 * @counter: pos
 * Return: void
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
/**
  *f_nop- do hamna
  *@head:head
  *@counter: pos
  *Return: void
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
/**
 * f_pall - display all
 * @head: head
 * @counter: count
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
