#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    char entity_2[30];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_5 = 46;                           // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    char entity_9[34];                       // Tag.BODY
    entity_7 = 19;                           // Tag.BODY
    entity_8 = 43;                           // Tag.BODY
    char entity_6[37];                       // Tag.BODY
    if (entity_0 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 42;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_0){              // Tag.BODY
    entity_2[entity_1] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_8] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_5] = 'p';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER