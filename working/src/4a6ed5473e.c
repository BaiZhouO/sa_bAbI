#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_3[21];                       // Tag.BODY
    entity_2 = 15;                           // Tag.BODY
    entity_6 = 4;                            // Tag.BODY
    while(entity_6 < entity_2){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'A';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER