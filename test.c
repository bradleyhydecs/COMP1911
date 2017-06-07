#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_LEN 1024
 
typedef struct piece Piece;
 
struct piece {
                char col_sym[MAX_LEN];
};
 
// Prints out a piece in the following format
// colour/symbol eg. R/*
void printPiece(Piece p);
 
// Reads in a piece from stdin and checks it is valid
// If a valid piece was read in, it returns 1
// Returns 0 otherwise
int readPiece(Piece * p);
 
int main(void) {
                Piece p1;
 
                printf("Enter pieces: ");
 
                if (readPiece(&p1) == 1){
                                printPiece(p1);
                } else {
                                fprintf(stderr, "Invalid Input\n");
                                return EXIT_FAILURE;
                }
 
 
                return EXIT_SUCCESS;
}
 
 
void printPiece(Piece p) {
 
                printf("%s\n", p.col_sym);
 
}
 
int readPiece(Piece * p) {
                char col[] = {'R', 'B', 'Y', 'G', '\0'};
                char sym[] = {'*', '^', '#', '$', '\0'};
                int i, j;
                int count = 0;
               
                j = 0;
                if (fgets(p->col_sym,MAX_LEN,stdin) != NULL) {
                                while (j < MAX_LEN) {
                                                i = 0;
                                                while (i < 4) {
                                                                if ((p->col_sym[j] == col[i]) || (p->col_sym[j] == sym[i])) {
                                                                                count++;
                                                                                printf("this col={%c}\n ", p->col_sym[j]);
                                                                }
                                                                i++;
                                                }
                                                j++;
                                }
                }
 
                printf("%d\n", count);
                if (count == 34) {
                                return 1;
                }
                return 0;
               
}
 
