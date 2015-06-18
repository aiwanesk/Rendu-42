/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwanesk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 12:03:09 by aiwanesk          #+#    #+#             */
/*   Updated: 2015/06/18 12:03:10 by aiwanesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	if ((c >= 48 && c <= 57) ||
		(c >= 65 && c <= 70) ||
		(c >= 97 && c <= 102))
		return (1);
	return (0);
}