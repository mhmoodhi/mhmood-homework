#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM_LETTERS ((int)26)
typedef enum;
typedef struct node;
typedef struct trie;
void memory_allocation_error(void);
node* new_node(void);
node* initialize_node(node* n,char letter) ;
node* create_node(char letter) ;
void free_node(node* n);
trie* new_trie(void);
trie* initialize_trie(trie* t);
trie* create_trie(void) ;
void close_word(trie* root) ;
int char2index(char c);
int read_character(trie* root, int c) ;
void allocate_word(trie* root) ;
trie* read_text() ;
void print_words_reverse(trie* root);
void print_trie_reverse(trie* root);
void print_words(trie* root);
void print_trie(trie* root);
void free_trie(trie* t) ;
void usage(char* program_name,char* message) ;
boolean should_reverse(int argc, char* argv[]);