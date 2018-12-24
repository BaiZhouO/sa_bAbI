#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[88];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[35];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 91;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_0 = 65;                           // Tag.BODY
    entity_5 = 11;                           // Tag.BODY
    if (entity_2 < entity_5){                // Tag.BODY
    entity_6[entity_0] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_2){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_1;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 1;                            // Tag.BODY
    char entity_4[51];                       // Tag.BODY
    entity_4[entity_3] = 'o';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_9 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER