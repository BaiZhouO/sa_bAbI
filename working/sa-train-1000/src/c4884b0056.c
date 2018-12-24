#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[25];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_6[74];                       // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    entity_1 = 33;                           // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    if (entity_8 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_8){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'l';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_0[entity_9] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[91];                       // Tag.BODY
    entity_3 = 30;                           // Tag.BODY
    char *entity_7 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_3] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER