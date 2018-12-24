#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[22];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = 2;                            // Tag.BODY
    entity_7 = 4;                            // Tag.BODY
    while(entity_0 < entity_7){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'I';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER