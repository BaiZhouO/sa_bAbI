#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_7[40];                       // Tag.BODY
    entity_4 = 24;                           // Tag.BODY
    entity_3 = 23;                           // Tag.BODY
    while(entity_3 < entity_4){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER