#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = 45;                                      // Tag.BODY
    int entity_4;                                       // Tag.BODY
    char entity_2[72];                                  // Tag.BODY
    entity_8 = 41;                                      // Tag.BODY
    char entity_0[76];                                  // Tag.BODY
    for(entity_4 = 0; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_4] = 'E';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                      // Tag.POINTER_DEC
    entity_0[entity_9] = 'i';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = &entity_4;                               // Tag.POINTER_DEC
    char entity_6[99];                                  // Tag.BODY
    char *entity_7 = (char *)(entity_5 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                       // Tag.BODY
    entity_3 = 1;                                       // Tag.BODY
    entity_6[entity_3] = 'k';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER