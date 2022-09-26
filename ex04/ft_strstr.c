/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:20:11 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/26 12:22:13 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compstr(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;

	while (*str != '\0')
	{
		start = str;
		if ((*str == *to_find) && ft_compstr(str, to_find))
			return (start);
		str++;
	}
	return (0);
}
