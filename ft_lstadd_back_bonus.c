void ft_lstadd(t_list **lst, t_list *new)
{
	if (!*lst)
	{	
		return ;
	}

	return ;
}
t_list create_node(void *content)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}
int main(int argc, char **argv)
{
	t_list *head;
	t_list *new;
	int i;

	if(argc != 2)
		return (1);
	i = 0;
	while(i < argc)
	{
		new = create_node(argv[1]);
		ft_lstadd(&head, new);
		i++;
	}
	return (0);
};
