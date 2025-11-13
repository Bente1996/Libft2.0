/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_atoi.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/17 16:18:33 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/17 16:42:12 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	converted;

	sign = 1;
	converted = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r' || \
*nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		converted = (*nptr++ - 48) + (10 * converted);
	return (converted * sign);
}
