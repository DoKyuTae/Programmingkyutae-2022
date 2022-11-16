#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STR 100


struct profile
{
	char book[MAX_STR];
	char author[MAX_STR];
	int page;
	char price[MAX_STR];
};

void print_prince(void);
void print_match(void);
void print_oldman(void);

int main(void)
{
	
	print_prince();
	print_match();
	print_oldman();

	return 0;

}

void print_prince(void)
{
	struct profile prince;

	strcpy_s(prince.book, "The Little Prince");
	strcpy_s(prince.author, "Antoine Marie Roger De Saint Exupery");
	prince.page = 136;
	strcpy_s(prince.price, "12000 Won");

	printf("Book Title : %s\n", prince.book);
	printf("Author : %s\n", prince.author);
	printf("Book Page : %d\n", prince.page);
	printf("Book Price : %s\n\n", prince.price);
}


void print_match(void)
{
	struct profile match;

	strcpy_s(match.book, "The Little Match Girl");
	strcpy_s(match.author, "Hans Christian Andersen");
	match.page = 32;
	strcpy_s(match.price, "9500 Won");

	printf("Book Title : %s\n", match.book);
	printf("Author : %s\n", match.author);
	printf("Book Page : %d\n", match.page);
	printf("Book Price : %s\n\n", match.price);
}


void print_oldman(void)
{
	struct profile oldman;

	strcpy_s(oldman.book, "The Old Man and the Sea");
	strcpy_s(oldman.author, "Ernest Hemingway");
	oldman.page = 160;
	strcpy_s(oldman.price, "8000 Won");
	
	printf("Book Title : %s\n", oldman.book);
	printf("Author : %s\n", oldman.author);
	printf("Book Page : %d\n", oldman.page);
	printf("Book Price : %s\n\n", oldman.price);

}