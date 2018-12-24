#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_9;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    char entity_5[73];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_4 = 70;                                      // Tag.BODY
    int entity_8;                                       // Tag.BODY
    char entity_0[91];                                  // Tag.BODY
    entity_1 = 73;                                      // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    if (entity_8 < entity_1){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 5;                                       // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_9 = 1; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_9] = 'W';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                      // Tag.POINTER_DEC
    entity_0[entity_4] = 'z';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = &entity_9;                               // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_6 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER