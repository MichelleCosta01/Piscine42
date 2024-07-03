/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-s <mcosta-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:13:38 by mcosta-s          #+#    #+#             */
/*   Updated: 2024/07/01 14:52:56 by mcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(){
	char origem [20]="Mi";
	char destino [5] = "le";
	printf("%s\n", destino);
	ft_strcpy(destino, origem);
	printf("%s\n", destino);

	return(0);
}
