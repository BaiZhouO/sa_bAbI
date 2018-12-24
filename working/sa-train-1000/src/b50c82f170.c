#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[28];                       // Tag.BODY
    char entity_7[69];                       // Tag.BODY
    entity_4 = 16;                           // Tag.BODY
    entity_1 = 28;                           // Tag.BODY
    entity_0 = 78;                           // Tag.BODY
    while(entity_0 < entity_1){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char entity_2[19];                       // Tag.BODY
    entity_6 = 48;                           // Tag.BODY
    entity_2[entity_6] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_4] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_9 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER