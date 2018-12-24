#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = 10;                           // Tag.BODY
    char entity_2[14];                       // Tag.BODY
    entity_4 = 94;                           // Tag.BODY
    while(entity_4 < entity_6){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER