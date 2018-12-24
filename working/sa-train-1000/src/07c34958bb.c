#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_9[60];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = 77;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    char entity_0[62];                       // Tag.BODY
    entity_1 = 77;                           // Tag.BODY
    if (entity_2 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 72;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_2){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = '6';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_7] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER