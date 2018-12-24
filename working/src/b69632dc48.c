#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_2[92];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_6 = rand();                                  // Tag.BODY
    entity_8 = 88;                                      // Tag.BODY
    if (entity_6 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_6 = 41;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_1 = 4; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_1] = 'Z';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                      // Tag.POINTER_DEC
    entity_4 = &entity_1;                               // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[91];                                  // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_3 = 78;                                      // Tag.BODY
    entity_9[entity_3] = 'n';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER