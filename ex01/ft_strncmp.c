/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:18:06 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/26 15:48:14 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
			i++;
	}
	else
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
