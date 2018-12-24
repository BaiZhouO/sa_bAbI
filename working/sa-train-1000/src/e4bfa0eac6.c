#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 71;                           // Tag.BODY
    char entity_9[45];                       // Tag.BODY
    entity_7 = 56;                           // Tag.BODY
    if (entity_0 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_7;                    // Tag.POINTER_DEC
    char entity_8[59];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_2 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 90;                           // Tag.BODY
    entity_8[entity_6] = 'y';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER