/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:50:59 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/24 15:52:49 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod);
{
	*div = a / b;
	*mod = a % b;
}