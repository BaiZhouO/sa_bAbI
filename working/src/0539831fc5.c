#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[70];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_8 = 48;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if(entity_3 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 'a';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER