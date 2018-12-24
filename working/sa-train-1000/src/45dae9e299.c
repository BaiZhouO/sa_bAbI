#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[10];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 39;                           // Tag.BODY
    entity_5 = 9;                            // Tag.BODY
    if (entity_6 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_6){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'S';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char *entity_4 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[15];                       // Tag.BODY
    char entity_7[98];                       // Tag.BODY
    entity_2 = 14;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 80;                           // Tag.BODY
    entity_9[entity_2] = 'l';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_0] = 'S';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER