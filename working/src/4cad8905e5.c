#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[28];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 29;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = 5;                                        // Tag.BODY
    entity_2[entity_6] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_5 = 35; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    entity_4 = 71;                                       // Tag.BODY
    char *entity_3 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[46];                                   // Tag.BODY
    entity_9[entity_4] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER