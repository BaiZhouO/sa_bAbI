#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_5[59];                       // Tag.BODY
    entity_9 = 24;                           // Tag.BODY
    entity_3 = 45;                           // Tag.BODY
    while(entity_9 < entity_3){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'I';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER