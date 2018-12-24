#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_6[3];                                   // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_3 = 66;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_4 = rand();                                  // Tag.BODY
    if (entity_4 < entity_3){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_4 = 73;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_0 = 9; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_0] = 'I';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                      // Tag.POINTER_DEC
    entity_5 = &entity_0;                               // Tag.POINTER_DEC
    int entity_7;                                       // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[92];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_1 = 41;                                      // Tag.BODY
    entity_7 = 12;                                      // Tag.BODY
    entity_8[entity_7] = 'm';                           // Tag.BUFWRITE_TAUT_SAFE
    char entity_9[9];                                   // Tag.BODY
    entity_9[entity_1] = '2';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER