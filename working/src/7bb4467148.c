#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 83;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_2[80];                       // Tag.BODY
    entity_7 = 83;                           // Tag.BODY
    while(entity_4 < entity_7){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER