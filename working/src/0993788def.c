#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 92;                           // Tag.BODY
    entity_5 = 50;                           // Tag.BODY
    char entity_4[72];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_7){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    char entity_0[5];                        // Tag.BODY
    char *entity_1 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                            // Tag.BODY
    entity_9 = 93;                           // Tag.BODY
    entity_0[entity_9] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER