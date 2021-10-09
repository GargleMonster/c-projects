/*
 * factorial.c
 * 
 * Copyright 2021 garglemonster <garglemonster@garglemonster>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	} else {
		return 1;
	}
}


int main(int argc, char **argv)
{
	int number = 0;
	
	if (argc > 2)
		number = atoi(argv[1]);
		
	printf("%d\n", factorial(number));
	
	return 0;
}

