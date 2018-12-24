#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_7[77];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_4 = 79;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 13;                           // Tag.BODY
    if (entity_5 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 70;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_5){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    char entity_1[41];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 54;                           // Tag.BODY
    entity_1[entity_6] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER