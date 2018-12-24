#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 51;                           // Tag.BODY
    char entity_2[60];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_5] = 'A';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER