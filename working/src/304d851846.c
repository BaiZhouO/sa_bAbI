#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[48];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = 89;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = 42;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if (entity_8 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_8){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER