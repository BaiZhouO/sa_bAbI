#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    char entity_9[95];                       // Tag.BODY
    entity_7 = 57;                           // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    if (entity_6 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_6){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_8] = 't';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char entity_0[49];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_3 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 6;                            // Tag.BODY
    entity_0[entity_5] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER