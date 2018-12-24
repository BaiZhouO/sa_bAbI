#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[19];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_4 = 18;                           // Tag.BODY
    entity_7 = 82;                           // Tag.BODY
    char entity_5[2];                        // Tag.BODY
    if (entity_8 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 32;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_8){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_7] = '4';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER