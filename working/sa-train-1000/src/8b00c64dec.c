#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_6[59];                       // Tag.BODY
    entity_8 = 72;                           // Tag.BODY
    entity_9 = 62;                           // Tag.BODY
    while(entity_8 < entity_9){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'j';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char entity_3[53];                       // Tag.BODY
    char *entity_7 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 64;                           // Tag.BODY
    entity_3[entity_1] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER