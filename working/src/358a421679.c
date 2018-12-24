#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[47];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_5 = 46;                           // Tag.BODY
    while(entity_5 < entity_7){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = '3';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER