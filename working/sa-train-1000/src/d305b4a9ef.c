#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_2[63];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = 78;                           // Tag.BODY
    entity_4 = 79;                           // Tag.BODY
    char entity_5[59];                       // Tag.BODY
    entity_1 = 3;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if (entity_0 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 49;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_0){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    entity_2[entity_6] = 'Y';                // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;                            // Tag.BODY
    char *entity_9 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[4];                        // Tag.BODY
    entity_7 = 15;                           // Tag.BODY
    entity_8[entity_7] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER