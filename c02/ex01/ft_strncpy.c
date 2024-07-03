/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-s <mcosta-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:39:56 by mcosta-s          #+#    #+#             */
/*   Updated: 2024/07/02 16:07:12 by mcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	while (i < n && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (1 < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Mi";
	char	dest[] = "Le";

	print("%s\n", ft_strncpy(dest, src, 10));
	return (0);
}
*/
