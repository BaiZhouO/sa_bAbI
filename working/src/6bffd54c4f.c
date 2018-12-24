#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_1[79];                       // Tag.BODY
    char entity_4[66];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_8 = 16;                           // Tag.BODY
    entity_0 = 96;                           // Tag.BODY
    entity_6 = 19;                           // Tag.BODY
    while(entity_0 < entity_6){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = '6';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    entity_1[entity_8] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_7;                            // Tag.BODY
    char entity_3[70];                       // Tag.BODY
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 29;                           // Tag.BODY
    entity_3[entity_7] = 'W';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER