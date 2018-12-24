#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    char entity_8[43];                       // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    entity_8[entity_1] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 81;                           // Tag.BODY
    char entity_5[25];                       // Tag.BODY
    if (entity_2 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 67;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_2){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER