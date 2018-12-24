#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 74;                           // Tag.BODY
    char entity_0[7];                        // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_7 = 39;                           // Tag.BODY
    if (entity_4 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 66;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_4){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'x';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_7;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    entity_1 = 93;                           // Tag.BODY
    char *entity_2 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[9];                        // Tag.BODY
    entity_5[entity_1] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER