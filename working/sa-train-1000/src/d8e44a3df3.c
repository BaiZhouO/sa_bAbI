#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_6[61];                       // Tag.BODY
    entity_3 = 53;                           // Tag.BODY
    char entity_9[26];                       // Tag.BODY
    entity_7 = 83;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 99;                           // Tag.BODY
    if(entity_7 < entity_2){                 // Tag.BODY
    entity_7 = 56;                           // Tag.BODY
    entity_6[entity_3] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_7 = 47;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_5 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[50];                       // Tag.BODY
    entity_1 = 16;                           // Tag.BODY
    entity_8[entity_1] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER