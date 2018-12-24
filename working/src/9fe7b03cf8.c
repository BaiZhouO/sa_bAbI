#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_5[98];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 10;                           // Tag.BODY
    entity_8 = 5;                            // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char entity_9[88];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char *entity_4 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 64;                           // Tag.BODY
    entity_9[entity_7] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER