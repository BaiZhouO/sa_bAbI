#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 31;                           // Tag.BODY
    entity_7 = 49;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    char entity_3[24];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 11;                           // Tag.BODY
    char entity_9[13];                       // Tag.BODY
    if (entity_2 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_2){              // Tag.BODY
    entity_9[entity_7] = 'q';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_1] = 'K';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER