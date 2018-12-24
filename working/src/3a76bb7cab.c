#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[25];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 17;                                       // Tag.BODY
    char entity_1[36];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_4 = 7;                                        // Tag.BODY
    for(entity_5 = 17; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'a';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_5;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[23];                                   // Tag.BODY
    entity_2 = 58;                                       // Tag.BODY
    entity_3[entity_4] = 'a';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_2] = 'P';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER