/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:20:11 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/26 15:58:08 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = 0;
	t = 0;
	if (to_find[t] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s + t] == to_find && str[s + t] != '\0')
			t++;
		if (to_find[t] == '\0')
			return (str + s);
		s++;
		t = 0;
	}
	return (0);
}
