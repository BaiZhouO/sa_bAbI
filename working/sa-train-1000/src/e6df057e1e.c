#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_7 = 37;                           // Tag.BODY
    char entity_2[18];                       // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_3 = 12;                           // Tag.BODY
    if (entity_1 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 81;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER