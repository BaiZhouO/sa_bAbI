#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_1[21];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 88;                           // Tag.BODY
    entity_5 = 13;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if (entity_2 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_2){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char *entity_6 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[27];                       // Tag.BODY
    entity_7 = 85;                           // Tag.BODY
    entity_3[entity_7] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER