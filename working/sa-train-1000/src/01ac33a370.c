#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_6[77];                       // Tag.BODY
    entity_1 = 92;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[33];                       // Tag.BODY
    entity_4 = 65;                           // Tag.BODY
    entity_3 = 40;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    entity_5[entity_1] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 31;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'L';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 26;                           // Tag.BODY
    char entity_9[11];                       // Tag.BODY
    entity_9[entity_2] = '2';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER