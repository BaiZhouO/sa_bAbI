#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_9[54];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 59;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if (entity_7 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_7){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    char entity_6[76];                       // Tag.BODY
    char entity_2[87];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 63;                           // Tag.BODY
    entity_6[entity_3] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_5 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    entity_8 = 1;                            // Tag.BODY
    entity_2[entity_8] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER