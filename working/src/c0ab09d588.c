#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 76;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = 76;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_9[29];                       // Tag.BODY
    if (entity_8 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_8){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    char entity_6[95];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_1 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 27;                           // Tag.BODY
    entity_6[entity_5] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER