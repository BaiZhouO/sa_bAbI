#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_0 = rand();                                  // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_2[39];                                  // Tag.BODY
    entity_7 = 62;                                      // Tag.BODY
    if (entity_0 < entity_7){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0 = 28;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_5 = 0; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_5] = 'v';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                      // Tag.POINTER_DEC
    entity_1 = &entity_5;                               // Tag.POINTER_DEC
    int entity_6;                                       // Tag.BODY
    char entity_3[12];                                  // Tag.BODY
    int entity_4;                                       // Tag.BODY
    char entity_8[9];                                   // Tag.BODY
    char *entity_9 = (char *)(entity_1 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 61;                                      // Tag.BODY
    entity_4 = 70;                                      // Tag.BODY
    entity_3[entity_4] = 'Q';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_6] = 't';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER