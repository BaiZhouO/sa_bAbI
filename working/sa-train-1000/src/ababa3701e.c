#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_7[68];                                   // Tag.BODY
    char entity_8[71];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 78;                                       // Tag.BODY
    entity_3 = 81;                                       // Tag.BODY
    for(entity_0 = 36; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_0] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_3] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER