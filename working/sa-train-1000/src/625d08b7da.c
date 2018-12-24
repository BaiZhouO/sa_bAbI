#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 26;                           // Tag.BODY
    char entity_7[86];                       // Tag.BODY
    entity_5 = 84;                           // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    entity_5 = 93;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = '0';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER