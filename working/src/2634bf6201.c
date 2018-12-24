#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    entity_8 = 80;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[23];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 66;                           // Tag.BODY
    char entity_7[71];                       // Tag.BODY
    entity_3 = 90;                           // Tag.BODY
    while(entity_1 < entity_3){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    entity_7[entity_8] = 'G';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_6[entity_1] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char entity_9[37];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_4 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 61;                           // Tag.BODY
    entity_9[entity_5] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER