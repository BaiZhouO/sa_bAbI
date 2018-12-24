#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_7[41];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_4 = 11;                           // Tag.BODY
    entity_0 = 89;                           // Tag.BODY
    if (entity_6 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_6){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER