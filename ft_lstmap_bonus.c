# include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *new;

	if(!lst || !f || !del)
		return (NULL);
	head = NULL;
	while(lst)
	{
		if(new = ft_lstnew(f(lst->content)))
			ft_lstadd_back(&head, new);
		else
		{
			while(head)
			{
				new = head->next;
				del(head->content);
				free(head);
				head = new;
			}
			return (NULL);
		}
		*lst = *lst->next;
	}
	return (*head);
}
