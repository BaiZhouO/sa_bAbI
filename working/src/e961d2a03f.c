#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_5[53];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 94;                                       // Tag.BODY
    for(entity_2 = 17; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_2;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 16;                                       // Tag.BODY
    char entity_7[26];                                   // Tag.BODY
    char entity_3[11];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3[entity_4] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 83;                                       // Tag.BODY
    entity_7[entity_6] = 'H';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER