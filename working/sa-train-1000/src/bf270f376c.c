#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_0[71];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_9[80];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_6 = 47;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_2 = 95;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_1 = 30;                           // Tag.BODY
    if (entity_3 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 40;                           // Tag.BODY
    entity_9[entity_1] = 'y';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_2] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER