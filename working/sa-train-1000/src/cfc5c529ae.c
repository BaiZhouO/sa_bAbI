#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 40;                           // Tag.BODY
    char entity_1[51];                       // Tag.BODY
    entity_0 = 82;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if (entity_5 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 65;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_5){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    char entity_7[29];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_6[34];                       // Tag.BODY
    entity_8 = 72;                           // Tag.BODY
    entity_4 = 99;                           // Tag.BODY
    entity_7[entity_4] = 'w';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_8] = 'j';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER