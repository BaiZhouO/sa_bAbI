#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[60];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_9 = 9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 46;                           // Tag.BODY
    if (entity_5 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 92;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_5){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[59];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 94;                           // Tag.BODY
    entity_4[entity_8] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER