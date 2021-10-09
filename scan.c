/*
 * scan.c
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


#include <stdio.h>
#include <stdlib.h>

int * readNumbers(int *count) {
	int mycount;
	int size;
	int *a;
	int n;
	
	mycount = 0;
	size = 1;
	
	a = malloc(sizeof(int) * size);
	if(a == 0) return 0;
	
	while(scanf("%d", &n) == 1) {
		while(mycount >= size) {
			size *= 2;
			a = realloc(a, sizeof(int) * size);
			if(a == 0) return 0;
		}
		
		a[mycount++] = n;
	}
	
	a = realloc(a, sizeof(int) * mycount);
	
	*count = mycount;
	
	return a;
}

int main(int argc, char **argv)
{
	int number;
	int array[10];
	
	printf("Enter a value: ");
	scanf("%d", &number);
	
	array[] = readNumbers(&number);
	
	return 0;
}

