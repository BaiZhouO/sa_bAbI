#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_5[31];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 61;                                       // Tag.BODY
    entity_9 = 38;                                       // Tag.BODY
    char entity_0[28];                                   // Tag.BODY
    entity_4 = 13;                                       // Tag.BODY
    char entity_3[76];                                   // Tag.BODY
    for(entity_8 = 63; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'J';                            // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_4] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_9] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER