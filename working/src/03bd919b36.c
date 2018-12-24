#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[76];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_4[25];                       // Tag.BODY
    entity_9 = 53;                           // Tag.BODY
    entity_0 = 73;                           // Tag.BODY
    entity_2 = 57;                           // Tag.BODY
    if (entity_3 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 65;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = '6';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char *entity_8 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5[entity_0] = 'i';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_1[4];                        // Tag.BODY
    entity_6 = 49;                           // Tag.BODY
    entity_1[entity_6] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER