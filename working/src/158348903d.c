#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    char entity_7[93];                                  // Tag.BODY
    entity_9 = 38;                                      // Tag.BODY
    char entity_4[45];                                  // Tag.BODY
    entity_2 = 11;                                      // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    if (entity_5 < entity_9){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 67;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_8 = 2; entity_8 < entity_5; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_8] = 'o';                           // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_2] = 'T';                           // Tag.BUFWRITE_TAUT_SAFE
    int *entity_0;                                      // Tag.POINTER_DEC
    entity_0 = &entity_8;                               // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_0 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER