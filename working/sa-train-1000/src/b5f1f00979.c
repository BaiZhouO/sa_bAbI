#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_4[55];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_6 = 14;                           // Tag.BODY
    entity_5 = 84;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if (entity_8 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 60;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_8){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'o';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER