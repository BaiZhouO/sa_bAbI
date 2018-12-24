#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 56;                           // Tag.BODY
    char entity_0[60];                       // Tag.BODY
    entity_8 = 96;                           // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_8] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char *entity_2 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 55;                           // Tag.BODY
    char entity_5[15];                       // Tag.BODY
    entity_5[entity_7] = 'm';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER