#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[54];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[54];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_9 = 13;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_6[23];                       // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    entity_5[entity_9] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 63;                           // Tag.BODY
    entity_1 = 84;                           // Tag.BODY
    if (entity_0 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_0){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    entity_6[entity_7] = 'M';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_8 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER