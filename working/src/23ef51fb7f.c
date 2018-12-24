#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[90];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_0 = 95;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER