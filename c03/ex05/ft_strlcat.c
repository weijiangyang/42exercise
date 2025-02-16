/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:57:16 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/16 21:43:03 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20] = "hello";
	char	*src;
	int		result;

	src = "les gars!";
	result = ft_strlcat(dest, src, 12);
	printf("%d", result);
	return (0);
}*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_initial_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_initial_dest = 0;
	len_src = 0;
	while (dest[len_initial_dest] != '\0')
		len_initial_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	if (size <= len_initial_dest)
		return (len_src + size);
	i = len_initial_dest;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len_src + len_initial_dest);
}
