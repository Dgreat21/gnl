/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <dgreat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:20:56 by dgreat            #+#    #+#             */
/*   Updated: 2019/04/19 18:20:56 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iswhitespace(int c)
{
	char	ch;

	ch = (char)c;
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	return (0);
}
