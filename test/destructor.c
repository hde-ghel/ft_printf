/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:59:49 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/11 13:00:42 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <tlechien@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 21:50:29 by tlechien          #+#    #+#             */
/*   Updated: 2019/11/11 12:58:57 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#define x(p1, p2)	ft_printf("pf result: %d\nft result: %d\n\n", p1, p2 -1)
#define x(p1, p2)    ft_printf("Printf result:    %d\nFt_printf result: %d\n\n", p1, p2 -1)

int main()
{

/*	//OCTAL\\

    ft_printf("\n{magenta}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░OCTAL░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-#5.0o|%-#5.o|\n\n", 0,0,0,0,0));

	//HEXA\\

    ft_printf("\n{blue}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░HEXA░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("ref : '%010x'\n", 542),
      ft_printf ("test: '%010x'\n\n", 542));
	x(printf    ("ref : '%#010x'\n", 542),
      ft_printf ("test: '%#010x'\n\n", 542));
	x(printf    ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 0,0,0,0,0));


	ft_printf("\n{green}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░POINT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//u
	x(printf    ("printf1     :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf3     :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n\n", 0,0,0,0,0));
	//6
	x(printf    ("printf6     :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n", 0,0,0,0,0),
      ft_printf ("ft_printf6  :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n\n", 0,0,0,0,0));

*/
	//DECI\\

    ft_printf("\n{cyan}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░DECI░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0),
    ft_printf   ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 0,0,0,0,0));
	//6
	x(printf    ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0),
      ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 0,0,0,0,0));
	//7
	x(printf    ("printf7     :|% 03d|\n", 0),
      ft_printf ("ft_printf7  :|% 03d|\n\n", 0));

	/*
	//UNSIGNED\\

    ft_printf("\n{yellow}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░UNSIGNED░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 0,0,0,0,0));
	//6
	x(printf    ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,0,0,0),
      ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 0,0,0,0,0));
	//7
	x(printf    ("printf7     :|% 03u|\n", 0),
    ft_printf   ("ft_printf7  :|% 03u|\n\n", 0));

*/	//FLOAT\\
	
	/*

	ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf2     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 0,0,0,0,0));
	//6
	x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 0,0,0,0,0));
	//7
	x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 0,0,0,0,0));
	//8
	x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 0,0,0,0,0));
	//9
	x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 0,0,0,0,0));
*/
/*	//OCTAL\\

	ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░OCTAL░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 1,1,1,1,1),
      ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n\n", 1,1,1,1,1));
	//2
	x(printf    ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 1,1,1,1,1),
      ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n\n", 1,1,1,1,1));
	//3
	x(printf    ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 1,1,1,1,1),
      ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n\n", 1,1,1,1,1));
	//4
	x(printf    ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1),
      ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n\n", 1,1,1,1,1));
	//5
	x(printf    ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n\n", 1,1,1,1,1));

	//HEXA\\

	ft_printf("\n{blue}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░HEXA░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("ref : '%010x'\n", 542),
      ft_printf ("test: '%010x'\n\n", 542));
	x(printf    ("ref : '%#010x'\n", 542),
      ft_printf ("test: '%#010x'\n\n", 542));
	x(printf    ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 1,1,1,1,1),
      ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 1,1,1,1,1));
	//2
	x(printf    ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 1,1,1,1,1),
      ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 1,1,1,1,1));
	//3
	x(printf    ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 1,1,1,1,1),
      ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 1,1,1,1,1));
	//4
	x(printf    ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 1,1,1,1,1),
      ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 1,1,1,1,1));
	//5
	x(printf    ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 1,1,1,1,1));


	ft_printf("\n{green}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░POINT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf1  :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n\n", 1,1,1,1,1));
	//2
	x(printf    ("printf2     :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf2  :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n\n", 1,1,1,1,1));
	//3
	x(printf    ("printf3     :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf3  :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n\n", 1,1,1,1,1));
	//4
	x(printf    ("printf4     :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf4  :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n\n", 1,1,1,1,1));
	//5
	x(printf    ("printf5     :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n\n", 1,1,1,1,1));
	//6
	x(printf    ("printf5     :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n\n", 1,1,1,1,1));
*/
	//DECI\\

	ft_printf("\n{cyan}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░DECI░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 1,1,1,1,1));
	//2
	x(printf    ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 1,1,1,1,1));
	//3
	x(printf    ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 1,1,1,1,1));
	//4
	x(printf    ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 1,1,1,1,1));
	//5
	x(printf    ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 1,1,1,1,1));
	//6
	x(printf    ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 1,1,1,1,1),
      ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 1,1,1,1,1));
	//7
	x(printf    ("printf7     :|% 03d|\n", 0),
      ft_printf ("ft_printf7  :|% 03d|\n\n", 0));
/*
	//UNSIGNED\\

	ft_printf("\n{yellow}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░UNSIGNED░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 1,1,1,1,1));
	//2
	x(printf    ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 1,1,1,1,1));
	//3
	x(printf    ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 1,1,1,1,1));
	//4
	x(printf    ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 1,1,1,1,1));
	//5
	x(printf    ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 1,1,1,1,1));
	//6
	x(printf    ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 1,1,1,1,1),
      ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 1,1,1,1,1));
	//7
	x(printf    ("printf7     :|% 03u|\n", 0),
      ft_printf ("ft_printf7  :|% 03u|\n\n", 0));

*/	//FLOAT\\

/*
	ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//2
	x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//3
	x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//4
	x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//5
	x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//6
	x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//7
	x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//8
	x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
	//9
	x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
*/
/*	//OCTAL\\

	ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░OCTAL░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 999,999,999,999,999),
      ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n\n", 999,999,999,999,999));
	//2
	x(printf    ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 999,999,999,999,999),
      ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n\n", 999,999,999,999,999));
	//3
	x(printf    ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 999,999,999,999,999),
      ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n\n", 999,999,999,999,999));
	//4
	x(printf    ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 999,999,999,999,999),
      ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n\n", 999,999,999,999,999));
	//5
	x(printf    ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n\n", 999,999,999,999,999));

	//HEXA\\

	ft_printf("\n{blue}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░HEXA░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("ref : '%010x'\n", 542),
      ft_printf ("test: '%010x'\n\n", 542));
	x(printf    ("ref : '%#010x'\n", 542),
      ft_printf ("test: '%#010x'\n\n", 542));
	x(printf    ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 999,999,999,999,999),
      ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 999,999,999,999,999));
	//2
	x(printf    ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 999,999,999,999,999),
      ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 999,999,999,999,999));
	//3
	x(printf    ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 999,999,999,999,999),
      ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 999,999,999,999,999));
	//4
	x(printf    ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 999,999,999,999,999),
      ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 999,999,999,999,999));
	//5
	x(printf    ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 999,999,999,999,999));


    ft_printf("\n{green}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░POINT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf1  :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n\n", 999,999,999,999,999));
	//2
	x(printf    ("printf2     :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf2  :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n\n", 999,999,999,999,999));
	//3
	x(printf    ("printf3     :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf3  :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n\n", 999,999,999,999,999));
	//4
	x(printf    ("printf4     :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf4  :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n\n", 999,999,999,999,999));
	//5
	x(printf    ("printf5     :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n\n", 999,999,999,999,999));
	//6
	x(printf    ("printf5     :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-07p|%-07.3p|%-07.1p|%-07.0p|%-07.p|\n\n", 999,999,999,999,999));
*/
	//DECI\\

	ft_printf("\n{cyan}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░DECI░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 999,999,999,999,999));
	//2
	x(printf    ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 999,999,999,999,999));
	//3
	x(printf    ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 999,999,999,999,999));
	//4
	x(printf    ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 999,999,999,999,999));
	//5
	x(printf    ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 999,999,999,999,999));
	//6
	x(printf    ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 999,999,999,999,999),
      ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 999,999,999,999,999));
	//7
	x(printf    ("printf7     :|% 03d|\n", 0),
      ft_printf ("ft_printf7  :|% 03d|\n\n", 0));

/*

	//UNSIGNED\\

	ft_printf("\n{yellow}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░UNSIGNED░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 999,999,999,999,999));
	//2
	x(printf    ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 999,999,999,999,999));
	//3
	x(printf    ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 999,999,999,999,999));
	//4
	x(printf    ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 999,999,999,999,999));
	//5
	x(printf    ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 999,999,999,999,999));
	//6
	x(printf    ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 999,999,999,999,999),
      ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 999,999,999,999,999));
	//7
	x(printf    ("printf7     :|% 03u|\n", 0),
      ft_printf ("ft_printf7  :|% 03u|\n\n", 0));

	//FLOAT\\

    ft_printf("\n{magenta}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//2
	x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//3
	x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//4
	x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//5
	x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//6
	x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//7
	x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//8
	x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//9
	x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
	//9.0
	x(printf    ("printf9.0   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0),
      ft_printf ("ft_printf9.0:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.0,999.0,999.0,999.0,999.0));
	//9.1
	x(printf    ("printf9.1   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1),
      ft_printf ("ft_printf9.1:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.1,999.1,999.1,999.1,999.1));
	//9.2
	x(printf    ("printf9.2   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2),
      ft_printf ("ft_printf9.2:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.2,999.2,999.2,999.2,999.2));
	//9.3
	x(printf    ("printf9.3   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3),
      ft_printf ("ft_printf9.3:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.3,999.3,999.3,999.3,999.3));
	//9.4
	x(printf    ("printf9.4   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4),
      ft_printf ("ft_printf9.4:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.4,999.4,999.4,999.4,999.4));
	//9.5
	x(printf    ("printf9.5   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5),
      ft_printf ("ft_printf9.5:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.5,999.5,999.5,999.5,999.5));
	//9.6
	x(printf    ("printf9.6   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6),
      ft_printf ("ft_printf9.6:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.6,999.6,999.6,999.6,999.6));
	//9.7
	x(printf    ("printf9.7   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7),
      ft_printf ("ft_printf9.7:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.7,999.7,999.7,999.7,999.7));
	//9.8
	x(printf    ("printf9.8   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8),
      ft_printf ("ft_printf9.8:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.8,999.8,999.8,999.8,999.8));
	//9.9
	x(printf    ("printf9.9   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9),
      ft_printf ("ft_printf9.9:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.9,999.9,999.9,999.9,999.9));
	//9.
	x(printf    ("printf9.    :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.),
    ft_printf   ("ft_printf9. :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.,999.,999.,999.,999.));
	return (0);
*/
}
