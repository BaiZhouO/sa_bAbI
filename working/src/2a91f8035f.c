#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_1[98];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_4 = 12;                           // Tag.BODY
    entity_5 = 51;                           // Tag.BODY
    while(entity_4 < entity_5){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER