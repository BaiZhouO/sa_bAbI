#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 21;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    char entity_8[29];                       // Tag.BODY
    char entity_4[49];                       // Tag.BODY
    entity_2 = 3;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 74;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_6){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    entity_4[entity_9] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_7 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER