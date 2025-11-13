/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_striteri.c                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 12:41:18 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 12:53:52 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
