#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_1;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    char entity_6[30];                                  // Tag.BODY
    char entity_0[41];                                  // Tag.BODY
    char entity_5[0];                                   // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_8 = 73;                                      // Tag.BODY
    entity_9 = 27;                                      // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_1 = 48;                                      // Tag.BODY
    for(entity_7 = 3; entity_7 < entity_8; entity_7++){ // Tag.BODY
    entity_5[entity_9] = 'O';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_6[entity_7] = 'c';                           // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_1] = 'H';                           // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                                      // Tag.POINTER_DEC
    entity_4 = &entity_7;                               // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER