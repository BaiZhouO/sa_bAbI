#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[3];                        // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_8[84];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_3 = 55;                           // Tag.BODY
    entity_5 = 52;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_7 = 6;                            // Tag.BODY
    if (entity_0 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_3] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER