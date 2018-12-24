#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_6 = 86;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_7[45];                       // Tag.BODY
    char entity_3[90];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7[entity_6] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 17;                           // Tag.BODY
    entity_8 = 70;                           // Tag.BODY
    char entity_2[96];                       // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if (entity_9 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_9){              // Tag.BODY
    entity_2[entity_0] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = 'o';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER