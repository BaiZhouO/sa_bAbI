#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_6[30];                       // Tag.BODY
    char entity_3[31];                       // Tag.BODY
    entity_4 = 32;                           // Tag.BODY
    entity_1 = 44;                           // Tag.BODY
    entity_7 = 61;                           // Tag.BODY
    while(entity_1 < entity_7){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_1] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER