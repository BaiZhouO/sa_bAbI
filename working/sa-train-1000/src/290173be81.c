#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_8[71];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 29;                           // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    while(entity_9 < entity_5){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'o';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 14;                           // Tag.BODY
    char entity_2[81];                       // Tag.BODY
    entity_2[entity_6] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER