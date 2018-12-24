#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_8[66];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 94;                                       // Tag.BODY
    for(entity_0 = 11; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_0] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    int entity_3;                                        // Tag.BODY
    entity_3 = 18;                                       // Tag.BODY
    char *entity_4 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[22];                                   // Tag.BODY
    entity_2[entity_3] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER