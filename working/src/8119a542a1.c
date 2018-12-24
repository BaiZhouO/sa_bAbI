#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[79];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = 98;                                       // Tag.BODY
    char entity_9[18];                                   // Tag.BODY
    entity_7[entity_4] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 3;                                        // Tag.BODY
    for(entity_1 = 57; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_1] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[49];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 90;                                       // Tag.BODY
    entity_3[entity_6] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER