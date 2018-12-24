#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_2[74];                       // Tag.BODY
    char entity_1[30];                       // Tag.BODY
    entity_7 = 4;                            // Tag.BODY
    entity_0 = 98;                           // Tag.BODY
    if (entity_9 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_9){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_4] = 'Q';                // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_3;                            // Tag.BODY
    char entity_8[20];                       // Tag.BODY
    entity_3 = 75;                           // Tag.BODY
    entity_8[entity_3] = 'm';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER