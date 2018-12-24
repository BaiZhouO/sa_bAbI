#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_9[66];                       // Tag.BODY
    entity_3 = 68;                           // Tag.BODY
    entity_4 = 64;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    entity_3 = 6;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'Q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    entity_1 = 30;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 97;                           // Tag.BODY
    char entity_7[44];                       // Tag.BODY
    char entity_5[42];                       // Tag.BODY
    entity_7[entity_2] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER