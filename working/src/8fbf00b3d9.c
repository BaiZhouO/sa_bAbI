#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_6 = 3;                            // Tag.BODY
    char entity_7[42];                       // Tag.BODY
    entity_9 = 94;                           // Tag.BODY
    if (entity_0 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 57;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_0){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_9] = 'e';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    entity_8 = 39;                           // Tag.BODY
    char entity_4[70];                       // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    entity_1 = 31;                           // Tag.BODY
    char entity_2[47];                       // Tag.BODY
    entity_2[entity_8] = 'o';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_1] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER