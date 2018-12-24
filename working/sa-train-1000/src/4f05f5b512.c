#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_7 = 80;                                      // Tag.BODY
    char entity_4[94];                                  // Tag.BODY
    entity_3 = rand();                                  // Tag.BODY
    if (entity_3 < entity_7){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_3 = 68;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_8 = 0; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_4[entity_8] = 'm';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                      // Tag.POINTER_DEC
    entity_5 = &entity_8;                               // Tag.POINTER_DEC
    char entity_0[48];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                                       // Tag.BODY
    entity_2 = 74;                                      // Tag.BODY
    entity_0[entity_2] = 'h';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 80;                                      // Tag.BODY
    char entity_6[11];                                  // Tag.BODY
    entity_6[entity_1] = '1';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER