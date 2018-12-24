#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[44];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 16;                           // Tag.BODY
    entity_0 = 80;                           // Tag.BODY
    if (entity_6 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_1] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER