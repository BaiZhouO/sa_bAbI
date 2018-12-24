#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[92];                       // Tag.BODY
    entity_2 = 41;                           // Tag.BODY
    entity_3 = 82;                           // Tag.BODY
    while(entity_3 < entity_2){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER