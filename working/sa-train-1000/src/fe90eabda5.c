#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_9;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    char entity_1[78];                                  // Tag.BODY
    char entity_0[90];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_9 = 15;                                      // Tag.BODY
    entity_6 = 80;                                      // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    if (entity_8 < entity_9){                           // Tag.BODY
    entity_0[entity_6] = 'h';                           // Tag.BUFWRITE_TAUT_SAFE
    } else {                                            // Tag.BODY
    entity_8 = 96;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_3 = 0; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_1[entity_3] = 'v';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                      // Tag.POINTER_DEC
    entity_5 = &entity_3;                               // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER