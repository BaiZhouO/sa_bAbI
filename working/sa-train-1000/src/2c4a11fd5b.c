#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_1[23];                       // Tag.BODY
    entity_3 = 73;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_8 = 26;                           // Tag.BODY
    if (entity_5 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 90;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 97;                           // Tag.BODY
    char entity_4[93];                       // Tag.BODY
    entity_4[entity_7] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER