#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 53;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_6[40];                       // Tag.BODY
    entity_1 = 10;                           // Tag.BODY
    while(entity_1 < entity_4){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[46];                       // Tag.BODY
    entity_8 = 33;                           // Tag.BODY
    entity_2[entity_8] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER