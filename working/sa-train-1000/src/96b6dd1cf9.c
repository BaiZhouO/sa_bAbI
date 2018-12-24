#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 90;                           // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    char entity_8[74];                       // Tag.BODY
    char entity_2[87];                       // Tag.BODY
    entity_1 = 81;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if (entity_0 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 87;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_1] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_4 < entity_0){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_4] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER