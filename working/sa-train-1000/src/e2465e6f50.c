#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[12];                       // Tag.BODY
    char entity_7[45];                       // Tag.BODY
    char entity_3[10];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = 83;                           // Tag.BODY
    entity_1 = 82;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 69;                           // Tag.BODY
    entity_5 = 58;                           // Tag.BODY
    while(entity_6 < entity_1){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    entity_3[entity_5] = '8';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_4[entity_6] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_7[entity_8] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER