#ifndef LEXER_H
#define LEXER_H

#include "token.h"


typedef struct {

 const char *source;
 size_t position;
 int line;
 int column;

} Lexer;


void lexer_init (Lexer *lexer, const char *source);
Token lexer_next_token (Lexer *lexer);


#endif // LEXER_H
