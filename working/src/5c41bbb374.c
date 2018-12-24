#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 94;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[96];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    if (entity_7 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 46;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_7){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'o';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 42;                           // Tag.BODY
    char entity_0[43];                       // Tag.BODY
    entity_3 = 81;                           // Tag.BODY
    char entity_4[89];                       // Tag.BODY
    entity_0[entity_6] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_3] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER