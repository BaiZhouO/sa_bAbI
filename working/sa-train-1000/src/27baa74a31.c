#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    char entity_6[21];                                  // Tag.BODY
    int entity_2;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_2 = 46;                                      // Tag.BODY
    entity_5 = 93;                                      // Tag.BODY
    char entity_4[66];                                  // Tag.BODY
    for(entity_8 = 2; entity_8 < entity_5; entity_8++){ // Tag.BODY
    entity_6[entity_2] = 'j';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_4[entity_8] = 'D';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                      // Tag.POINTER_DEC
    entity_7 = &entity_8;                               // Tag.POINTER_DEC
    char entity_1[15];                                  // Tag.BODY
    int entity_9;                                       // Tag.BODY
    char *entity_3 = (char *)(entity_7 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 21;                                      // Tag.BODY
    entity_1[entity_9] = '8';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER