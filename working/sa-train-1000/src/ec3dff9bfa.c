#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[69];                       // Tag.BODY
    entity_4 = 46;                           // Tag.BODY
    entity_1 = 96;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    char entity_8[9];                        // Tag.BODY
    if (entity_5 < entity_0){                // Tag.BODY
    entity_8[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_5 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_5){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[54];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 93;                           // Tag.BODY
    entity_3[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER