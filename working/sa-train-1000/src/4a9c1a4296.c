#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_5 = 70;                           // Tag.BODY
    entity_2 = 32;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_4[30];                       // Tag.BODY
    if (entity_8 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_8){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char entity_1[49];                       // Tag.BODY
    char *entity_0 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 49;                           // Tag.BODY
    entity_1[entity_6] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER