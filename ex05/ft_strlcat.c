/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:00:01 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/01 12:36:54 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	a;
	unsigned	int	b;
	unsigned	int	c;

	a = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	c = 0;
	while (dest[c] != '\0')
		c++;
	return (size + c);
}
