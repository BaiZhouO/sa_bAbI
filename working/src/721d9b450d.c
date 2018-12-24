#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_2 = 69;                           // Tag.BODY
    entity_5 = 91;                           // Tag.BODY
    char entity_7[60];                       // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    entity_5 = 49;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 49;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER