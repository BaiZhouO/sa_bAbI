#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 54;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    char entity_0[25];                       // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 40;                           // Tag.BODY
    char entity_2[23];                       // Tag.BODY
    entity_2[entity_9] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_7 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER