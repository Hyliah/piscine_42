/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constantes_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:37:40 by hlichten          #+#    #+#             */
/*   Updated: 2024/08/31 14:43:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*constantes_1(char *numbers, char *tab)
{
	if (numbers[0] == 4)
		tab[0][0] = {1};
	if (numbers[1] == 4)
		tab[1][0] = {1};
	if (numbers[2] == 4)
		tab[2][0] = {1};
	if (numbers[5] == 4)
		tab[0][1] = {1};
	if (numbers[6] == 4)
		tab[0][2] = {1};
	if (numbers[7] == 4)
		tab[0][3] = {1};
	if (numbers[9] == 4)
		tab[1][3] = {1};
	if (numbers[10] == 4)
		tab[2][3] = {1};
	if (numbers[11] == 4)
		tab[3][3] = {1}
	if (numbers[12] == 4)
		tab[3][0] = {1};
	if (numbers[13] == 4)
		tab[3][1] = {1};
	if (numbers[14] == 4)
		tab[3][2] = {1};
}


