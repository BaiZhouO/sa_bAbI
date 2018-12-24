#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_0[82];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 89;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_3 = 29;                           // Tag.BODY
    if (entity_1 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 68;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = '6';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char entity_6[27];                       // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 20;                           // Tag.BODY
    entity_6[entity_5] = '7';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER