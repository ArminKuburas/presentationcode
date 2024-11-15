/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unstructured.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:45:30 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/16 00:47:29 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int i = 5;
	if (i > 0) goto positive;
	printf("Negative\n");
	goto end;
positive:
	printf("Positive\n");
end:
	return (0);
}
