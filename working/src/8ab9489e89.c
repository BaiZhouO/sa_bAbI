#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    char entity_4[64];                                  // Tag.BODY
    int entity_5;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_8 = 66;                                      // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    entity_1 = 53;                                      // Tag.BODY
    char entity_3[96];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    if (entity_5 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 14;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_6 = 5; entity_6 < entity_5; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_4[entity_6] = 'A';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                      // Tag.POINTER_DEC
    entity_9 = &entity_6;                               // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3[entity_1] = '0';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER