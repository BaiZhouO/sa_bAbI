#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_9[35];                       // Tag.BODY
    entity_2 = 62;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[68];                       // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_7 = 85;                           // Tag.BODY
    entity_3 = 67;                           // Tag.BODY
    if (entity_1 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 80;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_2 < entity_1){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER