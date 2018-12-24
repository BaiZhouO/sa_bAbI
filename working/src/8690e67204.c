#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[39];                       // Tag.BODY
    entity_2 = 44;                           // Tag.BODY
    entity_8 = 7;                            // Tag.BODY
    entity_9 = 80;                           // Tag.BODY
    char entity_4[86];                       // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_8] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char entity_6[16];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 26;                           // Tag.BODY
    entity_6[entity_5] = 'Q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER