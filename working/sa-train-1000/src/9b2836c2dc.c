#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_4;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    char entity_3[10];                                  // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_4 = 76;                                      // Tag.BODY
    if (entity_1 < entity_4){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_1 = 4;                                       // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_9 = 9; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_9] = 'O';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                      // Tag.POINTER_DEC
    entity_2 = &entity_9;                               // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_2 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER