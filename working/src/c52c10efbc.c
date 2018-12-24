#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_0[12];                       // Tag.BODY
    char entity_2[41];                       // Tag.BODY
    entity_9 = 29;                           // Tag.BODY
    char entity_4[50];                       // Tag.BODY
    entity_0[entity_9] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 83;                           // Tag.BODY
    entity_3 = 41;                           // Tag.BODY
    entity_8 = 20;                           // Tag.BODY
    while(entity_3 < entity_6){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 'K';                // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_8] = 'F';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER