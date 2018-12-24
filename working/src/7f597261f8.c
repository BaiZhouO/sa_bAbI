#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[1];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[31];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = 21;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 11;                                       // Tag.BODY
    for(entity_9 = 51; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_9] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_5[entity_6] = 'S';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER