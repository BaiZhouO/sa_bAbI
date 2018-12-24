#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_8 = 13;                                      // Tag.BODY
    entity_6 = 67;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_2[73];                                  // Tag.BODY
    char entity_1[34];                                  // Tag.BODY
    for(entity_0 = 8; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_0] = 'Z';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                      // Tag.POINTER_DEC
    entity_1[entity_6] = 'p';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = &entity_0;                               // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_4 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER