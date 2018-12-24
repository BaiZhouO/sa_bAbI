#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_0 = 19;                           // Tag.BODY
    entity_5 = 8;                            // Tag.BODY
    char entity_3[20];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_9[23];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    if (entity_6 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 63;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_6){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'N';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_3[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[55];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 86;                           // Tag.BODY
    entity_4[entity_1] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER