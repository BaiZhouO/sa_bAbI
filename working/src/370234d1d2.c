#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[97];                       // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_5 = 45;                           // Tag.BODY
    char entity_6[53];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 26;                           // Tag.BODY
    entity_6[entity_8] = 'B';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 85;                           // Tag.BODY
    if (entity_1 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 52;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER