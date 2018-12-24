#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 53;                           // Tag.BODY
    char entity_0[13];                       // Tag.BODY
    entity_1 = 90;                           // Tag.BODY
    if (entity_7 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 93;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_7){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_1] = 'S';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 43;                           // Tag.BODY
    char entity_5[66];                       // Tag.BODY
    entity_5[entity_6] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER