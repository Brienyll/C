// CS 539, HW 1B, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double pagesRequired(double linesPerPage, double linesToPrint);
int die(const char * msg);

int main() {
	int pages, linesPerPage, linesToPrint;
	printf("lines per page: ");
	scanf("%i", &linesPerPage);
	printf("lines to print: ");
	scanf("%i", &linesToPrint);
	if (linesPerPage < 1 || linesPerPage > 999) die("input failure");
	pages = pagesRequired(linesPerPage, linesToPrint);
	printf("We need %i page/s\n", pages);
}

double pagesRequired(double linesPerPage, double linesToPrint) {
	return ceil(linesToPrint / linesPerPage);
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
