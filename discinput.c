/*
 * discinput.c
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

int main(int argc, char **argv)
{
	char filename[] = "/home/garglemonster/Desktop/C-Projs/Inputs/compinfo.txt";
	FILE *fp;
	void checkfordigits(FILE *);
	
	if ((fp = fopen(filename, "r")) == NULL) {
		printf("the file does NOT exist!");
		return 1;
	} else {
		printf("the file does exist.\n");
		checkfordigits(fp);
	}
	
	fclose(fp);
	
	return 0;
}

void checkfordigits(FILE *ifp) {
	int c, c2 = '5';
	
	while ((c = getc(ifp)) != EOF) {
		/* check if char 0-9 */
		if (c >= '0' && c <= '9') {
			putchar(c);
		}
		
		/* check if char is anything else */
		if (c < '0' || c > '9') {
			if (c2 >= '0' && c2 <= '9') {
				putchar('\n');
			}
		}
		
		c2 = c;
	}
}
