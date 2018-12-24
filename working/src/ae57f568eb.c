#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 94;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 95;                           // Tag.BODY
    char entity_0[51];                       // Tag.BODY
    char entity_5[76];                       // Tag.BODY
    entity_2 = 21;                           // Tag.BODY
    while(entity_2 < entity_6){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    entity_5[entity_9] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_0[entity_2] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    char entity_1[57];                       // Tag.BODY
    char *entity_7 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                            // Tag.BODY
    entity_3 = 67;                           // Tag.BODY
    entity_1[entity_3] = '5';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER