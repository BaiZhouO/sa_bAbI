#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_5[10];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 37;                           // Tag.BODY
    entity_6 = 19;                           // Tag.BODY
    entity_1 = 87;                           // Tag.BODY
    char entity_0[97];                       // Tag.BODY
    char entity_7[33];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_9 = 89;                           // Tag.BODY
    if (entity_3 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 87;                           // Tag.BODY
    entity_0[entity_1] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_9 < entity_3){              // Tag.BODY
    entity_7[entity_2] = 'W';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'm';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER