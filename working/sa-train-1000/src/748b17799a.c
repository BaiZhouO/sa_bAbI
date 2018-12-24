#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_5[11];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_8 = 36;                           // Tag.BODY
    entity_0 = 53;                           // Tag.BODY
    while(entity_8 < entity_0){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER