#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_4[41];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = 55;                           // Tag.BODY
    entity_3 = 97;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 34;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_6){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_3;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_2 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 77;                           // Tag.BODY
    char entity_7[47];                       // Tag.BODY
    entity_7[entity_8] = 'J';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER