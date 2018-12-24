#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_7 = 1;                            // Tag.BODY
    char entity_6[13];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[33];                       // Tag.BODY
    entity_3 = 32;                           // Tag.BODY
    entity_8 = 38;                           // Tag.BODY
    char entity_4[34];                       // Tag.BODY
    entity_5 = 43;                           // Tag.BODY
    if (entity_2 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_8] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_7] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER