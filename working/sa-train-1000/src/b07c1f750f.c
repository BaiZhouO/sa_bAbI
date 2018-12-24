#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_6[84];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_0[69];                       // Tag.BODY
    entity_1 = 57;                           // Tag.BODY
    entity_4 = 75;                           // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    if (entity_5 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_5){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_2] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char entity_3[73];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_9 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 87;                           // Tag.BODY
    entity_0[entity_1] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_8] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER