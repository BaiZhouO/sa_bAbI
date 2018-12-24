#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_1[48];                       // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    entity_4 = 79;                           // Tag.BODY
    while(entity_4 < entity_3){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'h';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    entity_6 = 84;                           // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[94];                       // Tag.BODY
    entity_8[entity_6] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER