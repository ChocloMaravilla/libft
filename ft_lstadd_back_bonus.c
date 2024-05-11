void ft_lstadd(t_list **lst, t_list *new)
{
	t_list *head;

	head = *lst;
	if (!*lst)
	{	
		new->next = *lst;
		*lst = new;
		return ;
	}
	while(head)
	{
		if(head->next == NULL)
		{	
			head->next = new;
			return;
		}
		head = head->next;
	}
	return ;
}
