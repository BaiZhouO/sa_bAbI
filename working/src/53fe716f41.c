#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_5[24];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 49;                           // Tag.BODY
    entity_3 = 99;                           // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    entity_4 = 74;                           // Tag.BODY
    while(entity_3 < entity_0){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_5[entity_4] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER