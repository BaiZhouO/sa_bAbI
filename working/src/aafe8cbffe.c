#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_0[37];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_6 = 99;                           // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    if (entity_4 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_4){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER