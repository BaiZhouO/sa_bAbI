#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_5[55];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_7 = 46;                                      // Tag.BODY
    int entity_4;                                       // Tag.BODY
    for(entity_4 = 8; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_4] = 'r';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                      // Tag.POINTER_DEC
    entity_6 = &entity_4;                               // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_6 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                       // Tag.BODY
    char entity_0[42];                                  // Tag.BODY
    entity_3 = 92;                                      // Tag.BODY
    entity_0[entity_3] = 'S';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER