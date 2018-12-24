#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[28];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    char entity_7[8];                        // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 83;                           // Tag.BODY
    entity_0 = 68;                           // Tag.BODY
    if (entity_5 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 82;                           // Tag.BODY
    entity_6[entity_3] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    while(entity_1 < entity_5){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_8 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 48;                           // Tag.BODY
    char entity_9[21];                       // Tag.BODY
    entity_9[entity_4] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER