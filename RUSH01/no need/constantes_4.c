/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constantes_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:37:40 by hlichten          #+#    #+#             */
/*   Updated: 2024/08/31 14:43:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*constantes_4(char *numbers, char *tab)
{
	if (numbers[0] == 1)
		tab[0][0] = {4};
	if (numbers[1] == 1)
		tab[1][0] = {4};
	if (numbers[2] == 1)
		tab[2][0] = {4};
	if (numbers[5] == 1)
		tab[0][1] = {4};
	if (numbers[6] == 1)
		tab[0][2] = {4};
	if (numbers[7] == 1)
		tab[0][3] = {4};
	if (numbers[9] == 1)
		tab[1][3] = {4};
	if (numbers[10] == 1)
		tab[2][3] = {4};
	if (numbers[11] == 1)
		tab[3][3] = {4}
	if (numbers[12] == 1)
		tab[3][0] = {4};
	if (numbers[13] == 1)
		tab[3][1] = {4};
	if (numbers[14] == 1)
		tab[3][2] = {4};
}


