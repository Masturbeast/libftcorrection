/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 20:31:38 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 19:59:54 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*t;

	t = (char *)str;
	while (*t && *t != (char)c)
		t++;
	if (*t == (char)c)
		return (t);
	else
		return (NULL);
}
