#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_4 = 17;                           // Tag.BODY
    char entity_0[52];                       // Tag.BODY
    entity_9 = 50;                           // Tag.BODY
    if (entity_5 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_5){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_9;                    // Tag.POINTER_DEC
    char entity_1[70];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 19;                           // Tag.BODY
    entity_1[entity_3] = 'F';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER