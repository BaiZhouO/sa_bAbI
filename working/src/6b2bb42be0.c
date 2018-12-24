#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_6[12];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 92;                           // Tag.BODY
    entity_1 = 12;                           // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER