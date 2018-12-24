#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_5[61];                       // Tag.BODY
    entity_6 = 50;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 42;                           // Tag.BODY
    if (entity_4 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_6 < entity_4){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_6] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER