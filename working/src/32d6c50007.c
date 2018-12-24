#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_9;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_9 = 11;                                      // Tag.BODY
    char entity_6[87];                                  // Tag.BODY
    for(entity_2 = 0; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_2] = 'G';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                      // Tag.POINTER_DEC
    entity_4 = &entity_2;                               // Tag.POINTER_DEC
    char entity_0[8];                                   // Tag.BODY
    char *entity_8 = (char *)(entity_4 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                                       // Tag.BODY
    entity_5 = 75;                                      // Tag.BODY
    entity_0[entity_5] = 'o';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER