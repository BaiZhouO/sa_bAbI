#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 95;                           // Tag.BODY
    char entity_5[6];                        // Tag.BODY
    entity_4 = 48;                           // Tag.BODY
    while(entity_4 < entity_6){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER