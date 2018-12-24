#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = 88;                           // Tag.BODY
    char entity_6[33];                       // Tag.BODY
    char entity_9[79];                       // Tag.BODY
    char entity_0[29];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_2 = 63;                           // Tag.BODY
    entity_7 = 24;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_8 = 64;                           // Tag.BODY
    if (entity_1 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'j';                // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_8] = 'R';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9[entity_7] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER