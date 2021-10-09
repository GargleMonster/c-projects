/*
 * countchars.c
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

#define FOUND	1
#define LOST	0

int main(int argc, char **argv)
{
	
	char filename[] = "/home/garglemonster/Desktop/C-Projs/Inputs/countingstuff.txt";
	int characters[] = {'a', 'e', 'i', 'o', 'u', 'y', ' ', '0', '1', '4', '9'};
	int count[11];
	FILE *fp;
	int i, c, k, state, nother = 0;
	
	for (k = 0; k < 11; k++)
		count[k] = 0;
	
	if ((fp = fopen(filename, "r")) == NULL) {
		printf("cat: cant' open %s\n", filename);
	} else {
		while ((c = getc(fp)) != EOF) {
			state = LOST;
			for (i = 0; i < 11; i++) {
				if (c == characters[i]) {
					++count[i];
					state = FOUND;
					break;
				}
			}
			
			if (state == LOST) {
				++nother;
			}
		}
				
		fclose(fp);
	}
	
	int j, vowels, squares;
	vowels = squares = 0;
	for (j = 0; j < 11; j++) {
		if (j < 6) 
			vowels += count[j];
		
		if (j > 6)
			squares += count[j];
	}
	
	printf("%d lower case vowels\n", vowels);
	printf("%d spaces\n", count[6]);
	printf("%d square digits\n", squares);
	printf("%d other\n", nother);
	
	return 0;
}


