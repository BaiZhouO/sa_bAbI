#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[79];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    if(entity_6 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 51;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER