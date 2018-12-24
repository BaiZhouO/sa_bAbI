#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_8 = 76;                           // Tag.BODY
    char entity_1[50];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_2 = 53;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if (entity_4 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_8] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_5[76];                       // Tag.BODY
    char *entity_9 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 1;                            // Tag.BODY
    entity_6 = 6;                            // Tag.BODY
    char entity_0[34];                       // Tag.BODY
    entity_0[entity_7] = 'x';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_6] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER