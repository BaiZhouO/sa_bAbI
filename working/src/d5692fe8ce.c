#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 24;                                       // Tag.BODY
    char entity_7[16];                                   // Tag.BODY
    for(entity_9 = 75; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_9;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char *entity_5 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[18];                                   // Tag.BODY
    entity_0 = 56;                                       // Tag.BODY
    entity_8[entity_0] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER