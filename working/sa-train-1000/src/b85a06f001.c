#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[30];                       // Tag.BODY
    entity_4 = 76;                           // Tag.BODY
    entity_9 = 31;                           // Tag.BODY
    while(entity_4 < entity_9){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'h';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_4;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    entity_5 = 46;                           // Tag.BODY
    char *entity_6 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[45];                       // Tag.BODY
    entity_8[entity_5] = '5';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER