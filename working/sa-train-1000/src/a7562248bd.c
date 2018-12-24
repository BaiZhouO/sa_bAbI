#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 48;                           // Tag.BODY
    entity_7 = 93;                           // Tag.BODY
    char entity_8[34];                       // Tag.BODY
    while(entity_1 < entity_7){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'm';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER