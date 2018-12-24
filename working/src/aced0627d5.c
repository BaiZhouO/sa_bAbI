#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_9[98];                                   // Tag.BODY
    entity_4 = 16;                                       // Tag.BODY
    for(entity_3 = 34; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_3] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_3;                                // Tag.POINTER_DEC
    char entity_5[12];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 27;                                       // Tag.BODY
    entity_5[entity_2] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_8 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER