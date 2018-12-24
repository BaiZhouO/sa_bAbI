#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[52];                       // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_3 = 84;                           // Tag.BODY
    entity_0 = 66;                           // Tag.BODY
    if (entity_9 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 77;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_9){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char entity_2[6];                        // Tag.BODY
    char *entity_4 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_8 = 48;                           // Tag.BODY
    char entity_1[61];                       // Tag.BODY
    entity_2[entity_8] = 'X';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 79;                           // Tag.BODY
    entity_1[entity_6] = '6';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER