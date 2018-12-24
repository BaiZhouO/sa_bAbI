#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    entity_2 = 50;                                      // Tag.BODY
    char entity_7[53];                                  // Tag.BODY
    char entity_6[2];                                   // Tag.BODY
    entity_4 = 40;                                      // Tag.BODY
    if (entity_8 < entity_4){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 6;                                       // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_0 = 0; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_2] = 'j';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_0] = 'e';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                      // Tag.POINTER_DEC
    entity_1 = &entity_0;                               // Tag.POINTER_DEC
    int entity_3;                                       // Tag.BODY
    char entity_5[97];                                  // Tag.BODY
    char *entity_9 = (char *)(entity_1 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 33;                                      // Tag.BODY
    entity_5[entity_3] = 'A';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER