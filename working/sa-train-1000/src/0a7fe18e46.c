#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[55];                       // Tag.BODY
    entity_6 = 97;                           // Tag.BODY
    entity_1 = 36;                           // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'm';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER