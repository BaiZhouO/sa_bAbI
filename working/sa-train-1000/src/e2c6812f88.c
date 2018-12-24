#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_5[86];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 80;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_7 = 39;                           // Tag.BODY
    if (entity_3 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 'X';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER