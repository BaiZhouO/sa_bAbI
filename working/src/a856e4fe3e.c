#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_3[57];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_2 = 21;                           // Tag.BODY
    entity_0 = 63;                           // Tag.BODY
    while(entity_2 < entity_0){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER