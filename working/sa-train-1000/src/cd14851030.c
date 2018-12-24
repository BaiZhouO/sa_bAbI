#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_3 = 83;                                      // Tag.BODY
    entity_7 = 27;                                      // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_2[2];                                   // Tag.BODY
    char entity_8[68];                                  // Tag.BODY
    for(entity_5 = 8; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_8[entity_5] = 'k';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                      // Tag.POINTER_DEC
    entity_4 = &entity_5;                               // Tag.POINTER_DEC
    int entity_1;                                       // Tag.BODY
    char entity_0[75];                                  // Tag.BODY
    entity_2[entity_3] = '3';                           // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_9 = (char *)(entity_4 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 77;                                      // Tag.BODY
    entity_0[entity_1] = '3';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER