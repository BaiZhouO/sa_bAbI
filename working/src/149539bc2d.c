#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[47];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_5 = 75;                           // Tag.BODY
    char entity_8[61];                       // Tag.BODY
    entity_2 = 78;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    if (entity_0 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 39;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_0){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_5] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_4 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[12];                       // Tag.BODY
    entity_9 = 11;                           // Tag.BODY
    entity_7[entity_9] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER