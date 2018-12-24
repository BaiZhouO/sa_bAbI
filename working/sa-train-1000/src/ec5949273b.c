#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_6[62];                       // Tag.BODY
    entity_3 = 17;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 82;                           // Tag.BODY
    while(entity_3 < entity_1){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER