#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[25];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_3 = 31;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER