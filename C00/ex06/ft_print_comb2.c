/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilee <ilee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:22:00 by ilee              #+#    #+#             */
/*   Updated: 2020/07/07 13:28:33 by ilee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	prt_div(void)
{
	write(1, " ", 1);
	write(1, ",", 1);
}

void	prt(int l0, int l1, char r0, char r1)
{
	l0 = l0 + 48;
	l1 = l1 + 48;
	
	write(1, &l0, 1);
	write(1, &l1, 1);
	write(1, " ", 1);
	write(1, &r0, 1);
	write(1, &r1, 1);

	if(!(l0=='9' && l1=='8' && r0=='9' && r1=='9'))
			prt_div();
}

void	prt_r(int l0, int l1)
{
	char num[2];
	
	num[0] = '0' + l0;
	num[1] = '0' + l1;
	while (num[0] <= '9')
	{
		while (num[1] <= '9')
		{
			prt(l0, l1, num[0], num[1]);
			num[1]++;
		}
		num[0]++;
		num[1] = 0;
	}
}

void ft_print_comb2(void)
{
	int l0;
	int l1;

	l0 = 0;
	l1 = 0;
	while (l0 <= '9')
	{
		while (l1 <= '9')
		{
			if(!(l0 == '9' && l1 == '8'))
			prt_r(l0, l1);
		}
		l1 = 0;
		l0++;
	}
}

int main()
{
	ft_print_comb2();
}
