#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 38;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    char entity_7[77];                       // Tag.BODY
    if(entity_1 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 29;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = 'u';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER