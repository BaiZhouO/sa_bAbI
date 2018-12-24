#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[22];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[53];                                   // Tag.BODY
    entity_2 = 79;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9[entity_2] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_1;                                        // Tag.BODY
    entity_3 = 39;                                       // Tag.BODY
    for(entity_1 = 84; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_1;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    entity_0 = 71;                                       // Tag.BODY
    char *entity_7 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[93];                                   // Tag.BODY
    entity_6[entity_0] = 'x';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER