#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 37;                           // Tag.BODY
    char entity_3[90];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if(entity_2 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 99;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER