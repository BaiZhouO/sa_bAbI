#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_7[99];                                  // Tag.BODY
    entity_0 = 4;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    if (entity_8 < entity_0){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 65;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_3 = 1; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_3] = 'z';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                      // Tag.POINTER_DEC
    entity_5 = &entity_3;                               // Tag.POINTER_DEC
    char entity_4[69];                                  // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                                       // Tag.BODY
    entity_1 = 79;                                      // Tag.BODY
    entity_4[entity_1] = 'B';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER