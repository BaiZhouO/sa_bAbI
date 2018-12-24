#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_9[21];                       // Tag.BODY
    char entity_1[31];                       // Tag.BODY
    entity_7 = 67;                           // Tag.BODY
    char entity_5[72];                       // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    entity_8 = 76;                           // Tag.BODY
    entity_2 = 7;                            // Tag.BODY
    while(entity_7 < entity_2){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    entity_5[entity_0] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_1[entity_7] = '6';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    entity_9[entity_8] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_3 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER