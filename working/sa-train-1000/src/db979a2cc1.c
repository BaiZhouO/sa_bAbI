#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[66];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_6 = 74;                           // Tag.BODY
    entity_2 = 24;                           // Tag.BODY
    while(entity_6 < entity_2){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_6;                    // Tag.POINTER_DEC
    char entity_1[61];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 83;                           // Tag.BODY
    entity_7 = 98;                           // Tag.BODY
    entity_1[entity_7] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[19];                       // Tag.BODY
    entity_5[entity_8] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER