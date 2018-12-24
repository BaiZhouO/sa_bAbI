#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[95];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_8 = 0;                            // Tag.BODY
    entity_6 = 11;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 49;                           // Tag.BODY
    char entity_9[23];                       // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    if (entity_1 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_1){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    entity_9[entity_7] = 'p';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_4[entity_8] = '9';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_8;                    // Tag.POINTER_DEC
    char entity_2[30];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 71;                           // Tag.BODY
    entity_2[entity_3] = 'y';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER