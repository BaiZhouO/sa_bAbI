#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_4;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_3[87];                                  // Tag.BODY
    entity_0 = 48;                                      // Tag.BODY
    for(entity_4 = 8; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_4] = 'S';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                      // Tag.POINTER_DEC
    entity_8 = &entity_4;                               // Tag.POINTER_DEC
    char entity_2[9];                                   // Tag.BODY
    char entity_5[22];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char *entity_6 = (char *)(entity_8 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                                       // Tag.BODY
    entity_9 = 0;                                       // Tag.BODY
    entity_1 = 88;                                      // Tag.BODY
    entity_5[entity_9] = 'x';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'K';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER