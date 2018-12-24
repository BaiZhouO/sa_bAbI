#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_2[25];                       // Tag.BODY
    char entity_8[44];                       // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    entity_7 = 32;                           // Tag.BODY
    entity_5 = 45;                           // Tag.BODY
    if (entity_0 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 88;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_0){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    entity_2[entity_7] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_8[entity_1] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char entity_3[78];                       // Tag.BODY
    char *entity_9 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 69;                           // Tag.BODY
    entity_3[entity_6] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER