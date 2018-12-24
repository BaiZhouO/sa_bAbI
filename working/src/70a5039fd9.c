#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_2[79];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_8 = 42;                           // Tag.BODY
    char entity_9[61];                       // Tag.BODY
    entity_1 = 27;                           // Tag.BODY
    entity_0 = 24;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_6){              // Tag.BODY
    entity_9[entity_0] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_8] = 'b';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER