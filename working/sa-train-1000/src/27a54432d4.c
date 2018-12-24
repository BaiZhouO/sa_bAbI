#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[17];                       // Tag.BODY
    entity_3 = 69;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER