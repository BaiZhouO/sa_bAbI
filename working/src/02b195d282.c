#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_1[51];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_6 = 33;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_0 = 37;                           // Tag.BODY
    entity_8 = 78;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[8];                        // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if (entity_4 < entity_0){                // Tag.BODY
    entity_1[entity_6] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_4 = 55;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[96];                       // Tag.BODY
    entity_3 = 30;                           // Tag.BODY
    entity_9[entity_3] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER