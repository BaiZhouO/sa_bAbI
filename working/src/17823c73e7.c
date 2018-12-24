#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_4 = 11;                           // Tag.BODY
    char entity_3[17];                       // Tag.BODY
    if(entity_2 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER