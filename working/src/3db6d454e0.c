#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    char entity_9[18];                                  // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_3 = 76;                                      // Tag.BODY
    entity_8 = 1;                                       // Tag.BODY
    char entity_1[57];                                  // Tag.BODY
    for(entity_5 = 4; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_1[entity_5] = 'N';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                      // Tag.POINTER_DEC
    entity_9[entity_8] = 'Y';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = &entity_5;                               // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_2 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER