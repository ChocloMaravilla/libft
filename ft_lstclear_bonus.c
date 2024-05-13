# include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	
	while(*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp);
		free(tmp);
	}
}
