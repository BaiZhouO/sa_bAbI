#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_7 = 73;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_8[6];                        // Tag.BODY
    char entity_6[2];                        // Tag.BODY
    entity_3 = 90;                           // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    if (entity_9 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 52;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_9){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'C';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_3] = 'j';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER