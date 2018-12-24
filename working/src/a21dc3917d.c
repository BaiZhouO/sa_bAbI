#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[40];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_1 = 68;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    entity_6 = 95;                           // Tag.BODY
    char entity_7[96];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if (entity_2 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5[entity_1] = 'o';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 39;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_2){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = '1';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER