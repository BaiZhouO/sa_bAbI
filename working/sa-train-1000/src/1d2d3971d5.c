#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_6 = 30;                           // Tag.BODY
    char entity_8[77];                       // Tag.BODY
    char entity_0[4];                        // Tag.BODY
    entity_3 = 52;                           // Tag.BODY
    entity_9 = 51;                           // Tag.BODY
    while(entity_6 < entity_3){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_6] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_9] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER