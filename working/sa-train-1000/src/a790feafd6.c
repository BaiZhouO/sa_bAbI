#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 39;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    char entity_3[88];                       // Tag.BODY
    entity_5 = 45;                           // Tag.BODY
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 59;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_7){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_1] = 'M';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER