#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[77];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_6 = 19;                           // Tag.BODY
    entity_3 = 24;                           // Tag.BODY
    while(entity_3 < entity_6){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'i';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER