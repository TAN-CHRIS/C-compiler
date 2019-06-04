%{
	#include <stdio.h>
	#include <string.h>
    int yylex();
    int yyerror(char *s);
	char tmp[80000];
%}

%union {
	char stringval[10000];
}

%token <stringval> IDENTIFIER CONSTANT STRING_LITERAL
%token <stringval> INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <stringval> AND_OP OR_OP MOD

%token <stringval> CHAR INT FLOAT DOUBLE CONST VOID

%token <stringval> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN


%type <stringval> stmts
%type <stringval> stmt
%type <stringval> expr
%type <stringval> ident 
%type <stringval> numeric
%type <stringval> typename
%type <stringval> primary_typename
%type <stringval> block

%type <stringval> var_decl
%type <stringval> func_decl
%type <stringval> para_list
%type <stringval> direct_decl
%type <stringval> call_args
%type <stringval> if_stmt
%type <stringval> while_stmt
%type <stringval> for_stmt
%type <stringval> jump_stmt

%type <stringval> primary_expr
%type <stringval> argument_expr_list
%type <stringval> postfix_expr
%type <stringval> assignment_expr
%type <stringval> and_expr                // &&
%type <stringval> equality_expr           // =
%type <stringval> relational_expr
%type <stringval> shift_expr
%type <stringval> additive_expr
%type <stringval> multiplicative_expr
%type <stringval> unary_expr
%type <stringval> logical_and_expr			// &
%type <stringval> inclusive_or_expr
%type <stringval> exclusive_or_expr
%type <stringval> logical_or_expr			// |
%type <stringval> conditional_expr
%type <stringval> program

%start program
%%

program
	: stmts {
		sprintf(tmp, "( %s )", $1);
		strcpy($$, tmp);
		printf("%s\n", $$);
	}
	;

stmts 
	: stmt {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| stmts stmt {
		sprintf(tmp, "%s %s", $1, $2);
		strcpy($$, tmp);
	}
	;

stmt 
	: expr ';' {
		sprintf(tmp, "( %s ; )", $1);
		strcpy($$, tmp);
	}
	| var_decl ';'{
		sprintf(tmp, "( %s ; )", $1);
		strcpy($$, tmp);
	}
	| func_decl {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| if_stmt {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| while_stmt {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| for_stmt {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| jump_stmt {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	// | case_stmt {
	// 	sprintf(tmp, "%s", $1);
	// 	strcpy($$, tmp);
	// }
	;


if_stmt 
	: IF expr block {
		sprintf(tmp, "( if ( %s ) ) %s", $2, $3);
		strcpy($$, tmp);
	} 
	| IF expr block ELSE block {
		sprintf(tmp, "( if ( %s ) %s else %s )", $2, $3, $5);
		strcpy($$, tmp);
	}
	// | SWITCH expr block {
	// 	sprintf(tmp, "( switch ( %s ) ) %s", $2, $3);
	// 	strcpy($$, tmp);
	// }
	;

while_stmt 
	: WHILE '(' expr ')' block {
		sprintf(tmp, "( while ( %s ) ( %s ) )", $3, $5);
		strcpy($$, tmp);
	}
	| DO block WHILE '(' expr ')' ';' {
		sprintf(tmp, "( do ( %s ) while ( %s ) )", $2, $5);
		strcpy($$, tmp);
	}
	;

for_stmt
	: FOR '(' expr ';' expr ';' expr  ')' block {
		sprintf (tmp, "( for ( %s ; %s ; %s ) ( %s ) )", $3, $5, $7, $9);
		strcpy($$, tmp);
	}
	;

jump_stmt
	// : GOTO ident ';' {
	// 	sprintf(tmp, "( %s %s ; )", $1, $2);
	// 	strcpy($$, tmp);
	// }
	: CONTINUE ';' {
		sprintf(tmp, "( %s ; )", $1);
		strcpy($$, tmp);
	}
	| BREAK ';' {
		sprintf(tmp, "( %s ; )", $1);
		strcpy($$, tmp);
	}
	| RETURN ';' {
		sprintf(tmp, "( %s ; )", $1);
		strcpy($$, tmp);
	}
	| RETURN expr ';' {
		sprintf(tmp, "( %s %s ; )", $1, $2);
		strcpy($$, tmp);
	}
	;

var_decl
	: typename ident {
		sprintf(tmp, "%s %s", $1, $2);
		strcpy($$, tmp);
	}
	| typename ident '[' numeric ']' {
		sprintf(tmp, "%s %s [ %s ]", $1, $2, $4);
		strcpy($$, tmp);
	}
	| typename ident '[' numeric ']' '=' '{' argument_expr_list '}'{
		sprintf(tmp, "%s %s [ %s ] = { %s }", $1, $2, $4, $8);
		strcpy($$, tmp);
	}
	| typename ident '=' expr {
		sprintf(tmp, "%s %s = %s", $1, $2, $4);
		strcpy($$, tmp);
	}
	| typename ident '[' ']'{
		sprintf(tmp, "%s %s [ ]", $1, $2);
		strcpy($$, tmp);
	}
	;

direct_decl
	: ident {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| numeric {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

argument_expr_list
	: direct_decl {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| argument_expr_list ',' direct_decl {
		sprintf(tmp, "%s , %s", $1, $3);
		strcpy($$, tmp);
	}

func_decl
	: typename ident '(' para_list ')' block {
		sprintf(tmp, "( %s %s ( %s ) %s )", $1, $2, $4, $6);
		strcpy($$, tmp);
	}
	| typename ident '(' ')' block {
		sprintf(tmp, "( %s %s ( ) %s )", $1, $2, $5);
		strcpy($$, tmp);
	}
	;

para_list
	: var_decl {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| para_list ',' var_decl {
		sprintf(tmp, "%s , %s", $1, $3);
		strcpy($$, tmp);
	}
	;


block
	: '{' stmts '}' {
		sprintf(tmp, "{ %s }", $2);
		strcpy($$, tmp);
	}
	| '{' '}' {
		sprintf(tmp, "{ }");
		strcpy($$, tmp);
	}
	;

ident 
	: IDENTIFIER {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

numeric
	: CONSTANT {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

typename
	: primary_typename {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

primary_typename
	: INT {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| CHAR {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| FLOAT {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| DOUBLE {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| VOID {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| CONST primary_typename {
		sprintf(tmp, "%s %s", $1, $2);
		strcpy($$, tmp);
	}
	;

expr 
	: assignment_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| '(' expr ')' {
		sprintf(tmp, "( %s )", $2);
		strcpy($$, tmp);
	}
	| ident '(' call_args ')' {
		sprintf(tmp, "( %s ( %s ) )", $1, $3);
		strcpy($$, tmp);
	}
	;

call_args 
	: call_args ',' expr {
		sprintf(tmp, "%s , %s", $1, $3);
		strcpy($$, tmp);
	}
	| expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;


primary_expr 
	: ident {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| numeric {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

postfix_expr
	: primary_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| postfix_expr INC_OP {
		sprintf(tmp, "( %s ++ )", $1);
		strcpy($$, tmp);
	}
	| postfix_expr DEC_OP {
		sprintf(tmp, "( %s -- )", $1);
		strcpy($$, tmp);
	}
	| postfix_expr '[' expr ']' {
		sprintf(tmp, "( %s [ %s ] )", $1, $3);
		strcpy($$, tmp);
	}
	;

unary_expr
	: postfix_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| INC_OP unary_expr  {
		sprintf(tmp, "( ++ %s )", $2);
		strcpy($$, tmp);
	}
	| DEC_OP unary_expr  {
		sprintf(tmp, "( -- %s )", $2);
		strcpy($$, tmp);
	}
	| '!' unary_expr {
		sprintf(tmp, "( ! %s )", $2);
		strcpy($$, tmp);
	}
	;

multiplicative_expr
	: unary_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| multiplicative_expr '*' unary_expr {
		sprintf(tmp, "( %s * %s )", $1, $3);
		strcpy($$, tmp);
	}
	| multiplicative_expr '/' unary_expr {
		sprintf(tmp, "( %s / %s )", $1, $3);
		strcpy($$, tmp);
	}
	| multiplicative_expr MOD unary_expr {
		sprintf(tmp, "( %s %s %s )", $1, $2, $3);
		strcpy($$, tmp);
	}
	;


additive_expr
	: multiplicative_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| additive_expr '+' multiplicative_expr {
		sprintf(tmp, "( %s + %s )", $1, $3);
		strcpy($$, tmp);
	}
	| additive_expr '-' multiplicative_expr {
		sprintf(tmp, "( %s - %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

shift_expr
	: additive_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	// | shift_expr RIGHT_OP additive_expr {
	// 	sprintf(tmp, "( %s %s %s )", $1, $2, $3);
	// 	strcpy($$, tmp);
	// }
	// | shift_expr LEFT_OP additive_expr {
	// 	sprintf(tmp, "( %s %s %s )", $1. $2, $3);
	// 	strcpy($$, tmp);
	// }
	;

relational_expr
	: shift_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| relational_expr LE_OP shift_expr {
		sprintf(tmp, "( %s <= %s )", $1, $3);
		strcpy($$, tmp);
	}
	| relational_expr GE_OP shift_expr {
		sprintf(tmp, "( %s >= %s )", $1, $3);
		strcpy($$, tmp);
	}
	| relational_expr '<' shift_expr {
		sprintf(tmp, "( %s < %s )", $1, $3);
		strcpy($$, tmp);
	}
	| relational_expr '>' shift_expr {
		sprintf(tmp, "( %s > %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

equality_expr
	: relational_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| equality_expr EQ_OP relational_expr {
		sprintf(tmp, "%s == %s", $1, $3);
		strcpy($$, tmp);
	}
	| equality_expr NE_OP relational_expr {
		sprintf(tmp, "%s != %s", $1, $3);
		strcpy($$, tmp);
	}
	;

and_expr
	: equality_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| and_expr '&' equality_expr {
		sprintf(tmp, "( %s & %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

exclusive_or_expr
	: and_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| exclusive_or_expr '^' and_expr {
		sprintf(tmp, "( %s ^ %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

inclusive_or_expr
	: exclusive_or_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| inclusive_or_expr '|' exclusive_or_expr {
		sprintf(tmp, "( %s | %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

logical_and_expr
	: inclusive_or_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| logical_and_expr AND_OP inclusive_or_expr {
		sprintf(tmp, "( %s && %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

logical_or_expr
	: logical_and_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| logical_or_expr OR_OP logical_and_expr {
		sprintf(tmp, "( %s || %s )", $1, $3);
		strcpy($$, tmp);
	}
	;

conditional_expr
	: logical_or_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	;

assignment_expr
	: conditional_expr {
		sprintf(tmp, "%s", $1);
		strcpy($$, tmp);
	}
	| unary_expr '=' assignment_expr {
		sprintf(tmp, "%s = %s", $1, $3);
		strcpy($$, tmp);
	}
	;

%%

int main(){
	yyparse();
	return 0;
}


int yyerror (char *s) {
   fprintf (stderr, "%s\n", s);
   return 0;
}