#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[73];                                   // Tag.BODY
    entity_3 = 38;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 4;                                        // Tag.BODY
    char entity_0[63];                                   // Tag.BODY
    for(entity_2 = 95; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_2;                                // Tag.POINTER_DEC
    entity_0[entity_3] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_4 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER