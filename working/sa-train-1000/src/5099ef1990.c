#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 89;                           // Tag.BODY
    char entity_5[14];                       // Tag.BODY
    char entity_8[68];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    entity_3 = 22;                           // Tag.BODY
    entity_8[entity_3] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    if (entity_4 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_4){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_9] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_9;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 25;                           // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[77];                       // Tag.BODY
    entity_6[entity_0] = '5';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER