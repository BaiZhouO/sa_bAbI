#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[70];                                   // Tag.BODY
    char entity_2[29];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_1 = 16;                                       // Tag.BODY
    entity_3 = 49;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_5[64];                                   // Tag.BODY
    entity_6 = 41;                                       // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 67;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 16; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = 'z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_3] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_7] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER