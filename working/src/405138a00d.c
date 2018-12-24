#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[48];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[27];                       // Tag.BODY
    char entity_7[81];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_1 = 89;                           // Tag.BODY
    entity_5 = 61;                           // Tag.BODY
    entity_7[entity_1] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 77;                           // Tag.BODY
    entity_8 = 58;                           // Tag.BODY
    entity_0[entity_5] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_6 < entity_8){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER