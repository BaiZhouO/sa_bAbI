#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_8[58];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = 25;                                       // Tag.BODY
    for(entity_9 = 73; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_9] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                        // Tag.BODY
    entity_3 = 76;                                       // Tag.BODY
    char entity_5[59];                                   // Tag.BODY
    entity_5[entity_3] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER