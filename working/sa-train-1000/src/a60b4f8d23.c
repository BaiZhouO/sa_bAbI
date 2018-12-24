#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_7[34];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_4 = 9;                            // Tag.BODY
    char entity_5[77];                       // Tag.BODY
    entity_3 = 10;                           // Tag.BODY
    entity_6 = 31;                           // Tag.BODY
    if (entity_0 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 54;                           // Tag.BODY
    entity_5[entity_6] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_3 < entity_0){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'Y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_3;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 30;                           // Tag.BODY
    char *entity_2 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[98];                       // Tag.BODY
    entity_8[entity_9] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER