#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_7[17];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_8 = 83;                           // Tag.BODY
    char entity_1[68];                       // Tag.BODY
    char entity_0[43];                       // Tag.BODY
    entity_3 = 89;                           // Tag.BODY
    entity_6 = 69;                           // Tag.BODY
    entity_9 = 5;                            // Tag.BODY
    entity_1[entity_9] = '0';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_3 < entity_6){              // Tag.BODY
    entity_7[entity_8] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER