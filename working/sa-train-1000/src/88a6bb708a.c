#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_5[26];                       // Tag.BODY
    entity_7 = 61;                           // Tag.BODY
    entity_0 = 88;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_6[80];                       // Tag.BODY
    char entity_1[32];                       // Tag.BODY
    entity_9 = 68;                           // Tag.BODY
    entity_4 = 55;                           // Tag.BODY
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_7;                    // Tag.POINTER_DEC
    entity_1[entity_4] = '3';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_9] = 'Z';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER