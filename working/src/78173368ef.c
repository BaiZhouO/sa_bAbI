#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_9[70];                       // Tag.BODY
    entity_3 = 89;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 55;                           // Tag.BODY
    if (entity_8 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_8){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'Y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_3;                    // Tag.POINTER_DEC
    char entity_4[7];                        // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_7 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 34;                           // Tag.BODY
    entity_4[entity_6] = 'e';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER