#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_6[12];                                   // Tag.BODY
    entity_8 = 6;                                        // Tag.BODY
    entity_9 = 56;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_1[35];                                   // Tag.BODY
    for(entity_2 = 50; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_1[entity_8] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = &entity_2;                                // Tag.POINTER_DEC
    int entity_5;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[93];                                   // Tag.BODY
    entity_5 = 57;                                       // Tag.BODY
    entity_3[entity_5] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER