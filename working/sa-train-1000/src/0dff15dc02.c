#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_0[7];                        // Tag.BODY
    entity_5 = 24;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_4 = 40;                           // Tag.BODY
    entity_9 = 6;                            // Tag.BODY
    char entity_8[37];                       // Tag.BODY
    if (entity_1 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 10;                           // Tag.BODY
    entity_0[entity_4] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    while(entity_5 < entity_1){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER