#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_9[55];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_0 = 86;                           // Tag.BODY
    char entity_3[11];                       // Tag.BODY
    entity_9[entity_0] = 'I';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 57;                           // Tag.BODY
    entity_7 = 64;                           // Tag.BODY
    if (entity_5 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 53;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_5){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    entity_6 = 40;                           // Tag.BODY
    char entity_4[84];                       // Tag.BODY
    char *entity_8 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_6] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER