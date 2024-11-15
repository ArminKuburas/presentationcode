/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examples.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:45:34 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/16 00:45:35 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	boil_water(void)
{
	printf("Boiling water\n");
}

void	grind_coffee_beans(void)
{
	printf("Grinding coffee beans\n");
}

void	make_coffee(void)
{
	printf("Making coffee\n");
}

int	main(void)
{
	int i = 0;

	i = i + 2;
	boil_water();
	grind_coffee_beans();
	make_coffee();
}
