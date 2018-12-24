#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_2[53];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = 61;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_5[64];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[86];                                   // Tag.BODY
    entity_9 = 97;                                       // Tag.BODY
    entity_4 = 72;                                       // Tag.BODY
    for(entity_8 = 66; entity_8 < entity_9; entity_8++){ // Tag.BODY
    entity_2[entity_7] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_8;                                // Tag.POINTER_DEC
    entity_5[entity_4] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER