#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_2[86];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_0[88];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_1 = 49;                           // Tag.BODY
    entity_3 = 24;                           // Tag.BODY
    entity_9 = 68;                           // Tag.BODY
    entity_5 = 77;                           // Tag.BODY
    char entity_6[90];                       // Tag.BODY
    if (entity_4 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_4){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    entity_6[entity_1] = 'e';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_5] = '7';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER