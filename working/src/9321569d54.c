#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_2[73];                       // Tag.BODY
    entity_6 = 64;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    entity_9 = 81;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 92;                           // Tag.BODY
    if (entity_0 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 26;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_9] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char entity_1[80];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 99;                           // Tag.BODY
    entity_1[entity_8] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_5 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER