#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_4[50];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_5 = 42;                           // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    entity_4[entity_8] = 'M';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 14;                           // Tag.BODY
    char entity_9[77];                       // Tag.BODY
    if (entity_0 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_0){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char entity_1[79];                       // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 98;                           // Tag.BODY
    entity_1[entity_6] = '4';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER