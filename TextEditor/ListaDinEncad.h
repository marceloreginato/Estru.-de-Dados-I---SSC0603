//Arquivo ListaDinEncad.h

#define FALSO      0
#define VERDADEIRO 1

#define OK         1
#define ERRO       0

//typedef char Tipo_Dado;
typedef char Tipo_Dado[15];

//Definicao do tipo lista
struct elemento{
    Tipo_Dado dado;
    struct elemento *prox;
};

typedef struct elemento Elem;

typedef struct elemento* Lista;

typedef struct elemento* Cursor;

Lista* cria_lista();
Cursor* cria_cursor();
void libera_lista(Lista* li);
void libera_cursor(Cursor* cursor);
int insere_lista_final(Lista* li, Cursor* cursor, Tipo_Dado dt);
int insere_lista_inicio(Lista* li, Cursor* cursor, Tipo_Dado dt);
int insere_lista_ordenada(Lista* li, Tipo_Dado dt);
int remove_lista(Lista* li, Tipo_Dado dt);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int tamanho_lista(Lista* li);
int lista_vazia(Lista* li);
int lista_cheia(Lista* li);
void imprime_lista(Lista* li);
void imprime_cursor(Cursor* cursor);
int consulta_lista_dado(Lista* li, Tipo_Dado dt, Elem **el);
int consulta_lista_pos(Lista* li, int pos, Elem **el);

// Novas rotinas
int insere_lista_antes(Lista* li, Cursor *cursor, Tipo_Dado dt);
int insere_lista_depois(Lista* li, Cursor *cursor, Tipo_Dado dt);
int buscar_palavra(Lista* li, Cursor* cursor, Tipo_Dado dt);
int remove_lista_cursor(Lista* li, Cursor* cursor);
int go_inicio(Lista *li, Cursor* cursor);
int go_fim(Lista *li, Cursor* cursor);
int go_prox(Lista* li, Cursor* cursor);
int go_ant(Lista* li, Cursor* cursor);