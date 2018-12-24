#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[19];                       // Tag.BODY
    char entity_2[59];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_7 = 91;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_0 = 81;                           // Tag.BODY
    entity_4 = 24;                           // Tag.BODY
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    entity_2[entity_4] = 'y';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_1[entity_7] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 87;                           // Tag.BODY
    char entity_3[78];                       // Tag.BODY
    char *entity_6 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3[entity_9] = 'D';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER