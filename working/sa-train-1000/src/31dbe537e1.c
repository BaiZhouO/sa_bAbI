#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    char entity_8[12];                       // Tag.BODY
    entity_5 = 71;                           // Tag.BODY
    entity_2 = 71;                           // Tag.BODY
    if (entity_7 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_7){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER