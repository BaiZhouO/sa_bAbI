#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_3[99];                       // Tag.BODY
    entity_5 = 0;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 34;                           // Tag.BODY
    if (entity_1 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_1){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_9] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char entity_2[77];                       // Tag.BODY
    char entity_8[78];                       // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 75;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 20;                           // Tag.BODY
    entity_2[entity_7] = 'l';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_4] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER