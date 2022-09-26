/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:57:39 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/26 14:02:51 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *des, char *src)
{
	int	d;
	int	s;

	d = 0;
	while (dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		dest[d] = src[s];
		d++;
		s++;
	dest[d] = '\0';
	return (dest);
}
