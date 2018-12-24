#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[23];                       // Tag.BODY
    entity_2 = 1;                            // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    if(entity_4 < entity_2){                 // Tag.BODY
    entity_4 = 83;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 92;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER