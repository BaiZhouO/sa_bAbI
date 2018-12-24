#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_8[99];                       // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_5 = 32;                           // Tag.BODY
    char entity_1[46];                       // Tag.BODY
    entity_2 = 59;                           // Tag.BODY
    entity_1[entity_2] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_5 < entity_7){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'r';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER